#include <cstdlib>  // for system()
#include <iostream>

int main() {
    std::cout << "🔍 Scanning Borland Directory...\n";

    // Simulate missing files
    bool missing = true;

    if (missing) {
        std::cout << "⚠️  Missing critical Borland tools. Requesting PowerShell to fetch...\n";

#ifdef _WIN32
        system("powershell -ExecutionPolicy Bypass -File fetchBorlandTools.ps1");
#else
        std::cout << "⚠️  PowerShell automation skipped. Run fetchBorlandTools.ps1 manually in Windows.\n";
#endif
        // prevents error sh: 1: powershell: command not found
        // keeps app portable across Linux/macOS/Codespaces
        // and keeps logic available for Windows users on home machine
    }

    std::cout << "🛠️  Scan complete. Check devtools folder.\n";
    return 0;
}
