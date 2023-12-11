#pragma once

#include <string>
#include <vector>

class FileReader {
public:
    explicit FileReader(const std::string& filename);

    std::vector<std::string> readLines() const;
    std::string readWholeFile() const;

private:
    std::string filename;
};
