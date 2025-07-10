#include <iostream>
#include <cstdlib>     // for system()
#include <filesystem>  // C++17 and up
#include <fstream>     // for reading file presence

// Modular headers for future logic
#include "init.h"
#include "feeds.h"
#include "pointers.h"
#include "dataset.h" // add this for dataset loading

namespace fs = std::filesystem;

// Local file check helper
bool fileExists(const std::string& path) {
    return fs::exists(path);
}

int main() {
    std::cout << "🔧 Starting BorlandCPP Hackfrontier Scanner...\n";

    // 🔍 Phase 1: Scan Borland Executables
    std::cout << "🔍 Scanning Borland Directory...\n";
    std::string tools[] = { "bcc.exe", "tlink.exe", "dfa.exe" };
    bool missing = false;

    for (const auto& tool : tools) {
        std::string path = "../devtools/" + tool;
        if (!fileExists(path)) {
            std::cout << "⚠️  Missing: " << tool << "\n";
            missing = true;
        }
    }

    if (missing) {
        std::cout << "⚠️  Missing critical Borland tools. Attempting to fetch...\n";
#ifdef _WIN32
        system("powershell -ExecutionPolicy Bypass -File fetchBorlandTools.ps1");
#else
        std::cout << "⚠️  PowerShell automation skipped. Run fetchBorlandTools.ps1 manually in Windows.\n";
#endif
    } else {
        std::cout << "✅ All Borland tools present.\n";
    }

    // 📡 Phase 2: Load Feed and Dataset Links
    std::cout << "📡 Loading Live Feeds & Dataset Pointers...\n";
    std::ifstream feeds("../feeds/live_feeds.json");
    std::ifstream datasets("../data/pointers/dataset_links.ps1"); // Replace with JSON when ready

    if (feeds) {
        std::cout << "📁 Found live_feeds.json\n";
        loadFeeds(); // Modular call (stubbed or real)
    } else {
        std::cout << "❌ Missing: feeds/live_feeds.json\n";
    }

    if (datasets) {
        std::cout << "📁 Found dataset_links.ps1 (or pointers)\n";
        loadDatasetPointers(); // Modular call (stubbed or real)
    } else {
        std::cout << "❌ Missing: dataset_links.ps1\n";
    }

    std::cout << "🛠️  Scan complete. Ready to begin analysis.\n";
    return 0;
}
