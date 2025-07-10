// dfa_gui.cpp
#include <cstdlib>   // for system()
#include <iostream>  // for output

int main() {
    std::cout << "🚀 Launching Borland Tool GUI via PowerShell...\n";

    // PowerShell script runner
    int result = system("powershell -ExecutionPolicy Bypass -File launch_gui.ps1");

    if (result == 0) {
        std::cout << "✅ GUI launched successfully.\n";
    } else {
        std::cerr << "❌ Failed to launch GUI. Return code: " << result << "\n";
    }

    return 0;
}
