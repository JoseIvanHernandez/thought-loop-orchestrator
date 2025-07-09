#include <cstdlib> // for system()
#include <iostream>

int main() {
    std::cout << "🔍 Scanning Borland Directory...\n";

    // Simulate missing files
    bool missing = true;

    if (missing) {
        std::cout << "⚠️  Missing critical Borland tools. Requesting PowerShell to fetch...\n";
        system("powershell -ExecutionPolicy Bypass -File fetchBorlandTools.ps1");
    }

    std::cout << "🛠️  Scan complete. Check devtools folder.\n";
    return 0;
}
