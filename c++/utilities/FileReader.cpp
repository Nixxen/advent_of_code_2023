#include "FileReader.h"
#include <iostream>
#include <fstream>
#include <sstream>

FileReader::FileReader(const std::string& filename) : filename(filename) {}

std::vector<std::string> FileReader::readLines() const {
    std::ifstream file(filename);
    if (!file.is_open()) {
        std::cerr << "Error opening file: " << filename << std::endl;
        return {};
    }

    std::vector<std::string> lines;
    std::string line;
    while (std::getline(file, line)) {
        lines.push_back(line);
    }

    return lines;
}

std::string FileReader::readWholeFile() const {
    std::ifstream file(filename);
    if (!file.is_open()) {
        std::cerr << "Error opening file: " << filename << std::endl;
        return {};
    }

    std::stringstream buffer;
    buffer << file.rdbuf();
    return buffer.str();
}
