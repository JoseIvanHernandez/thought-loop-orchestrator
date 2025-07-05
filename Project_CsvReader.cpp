#include <iostream>
#include <fstream>
#include <sstream>
#include <vector>
#include <string>
#include <iomanip>

struct FileEntry {
    std::string fileName;
    std::string fullPath;
    std::string extension;
    unsigned long long sizeBytes;  // DECLARED CORRECTLY
    std::string lastModified;
    std::string owner;
    std::string permissions;
};

// Load CSV and parse into FileEntry structs
std::vector<FileEntry> loadCsv(const std::string& path) {
    std::vector<FileEntry> entries;
    std::ifstream file(path);
    std::string line;

    if (!file.is_open()) {
        std::cerr << "❌ Failed to open file: " << path << std::endl;
        return entries;
    }

    std::getline(file, line); // Skip header

    while (std::getline(file, line)) {
        std::stringstream ss(line);
        std::string token;
        FileEntry entry;
        int column = 0;

        while (std::getline(ss, token, ',')) {
            switch (column) {
                case 0: entry.fileName = token; break;
                case 1: entry.fullPath = token; break;
                case 2: entry.extension = token; break;
                case 3:
                    try {
                        entry.sizeBytes = std::stoull(token);
                    } catch (...) {
                        entry.sizeBytes = 0;
                    }
                    break;
                case 4: entry.lastModified = token; break;
                case 5: entry.owner = token; break;
                case 6: entry.permissions = token; break;
                default: break;
            }
            ++column;
        }

        if (!entry.fileName.empty() && entry.sizeBytes > 0 && !entry.lastModified.empty()) {
            entries.push_back(entry);
        } else {
            std::cerr << "Skipped malformed entry: " << line << std::endl;
        }
    }

    return entries;
}

// Display nicely formatted output
void printEntries(const std::vector<FileEntry>& entries) {
    std::cout << std::left
              << std::setw(25) << "File"
              << std::setw(12) << "Size (MB)"
              << std::setw(20) << "Modified"
              << std::setw(18) << "Extension"
              << std::setw(20) << "Owner"
              << std::setw(30) << "Permissions" << std::endl;

    std::cout << std::string(125, '-') << "\n";

    for (const auto& e : entries) {
        std::cout << std::left
                  << std::setw(25) << e.fileName
                  << std::setw(12) << std::fixed << std::setprecision(2)
                  << static_cast<double>(e.sizeBytes) / (1024 * 1024)
                  << std::setw(20) << e.lastModified
                  << std::setw(18) << e.extension
                  << std::setw(20) << e.owner
                  << std::setw(30) << e.permissions << "\n";
    }
}

int main() {
    std::string csvPath = "OneDriveAudit.csv"; // Modify if needed
    auto entries = loadCsv(csvPath);

    if (!entries.empty()) {
        std::cout << "Loaded " << entries.size() << " entries.\n\n";
        printEntries(entries);
    } else {
        std::cout << "No valid entries found.\n";
    }

    return 0;
}
