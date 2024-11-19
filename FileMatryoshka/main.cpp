#include <iostream>
#include <fstream>
#include <filesystem>
#include <string>

using namespace std;
namespace fs = std::filesystem;

// File creation method
void createFile(const std::string& filePath, const std::string& content) {
    std::ofstream file(filePath);  // Fixed the colon to semicolon here
    if (file.is_open()) {
        file << content;
        file.close();
        cout << "File created: " << filePath << endl;  // Added space for clarity       
    }
    else {
        cerr << "File not created!! " << filePath << endl;
    }
}   

// Copies the given file to all subfolders under the root folder.
void copyFileToAllSubFolders(const std::string& sourceFile, const std::string& rootDirectory) {
    try {
        for (const auto& entry : fs::recursive_directory_iterator(rootDirectory)) {
            if (fs::is_directory(entry.path())) {

                // Creates the target file path.
                std::string targetPath = entry.path().string() + "/" + fs::path(sourceFile).filename().string();
                try {
                    // Copies the file to the destination, overwrites it if it exists.
                    fs::copy_file(sourceFile, targetPath, fs::copy_options::overwrite_existing);
                    std::cout << "File copied: " << targetPath << std::endl;
                } catch (const std::exception& e) {
                    std::cerr << "Error copying: " << e.what() << " (" << targetPath << ")" << std::endl;
                }
            }
        }
    }
    catch (const std::exception& e) {
        std::cerr << "Error: " << e.what() << std::endl;
    }
}

int main() {
    // The name and content of the file to be created.
    string fileName = "matryoshka.txt";   
    string fileContent = "This file is created.";

    string sourceFilePath = "./" + fileName;

    // Root directory
    string rootDirectory = "C:/Program Files";

    createFile(sourceFilePath, fileContent);
    copyFileToAllSubFolders(sourceFilePath, rootDirectory);

    return 0;
}
