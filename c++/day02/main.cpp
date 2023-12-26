#include "solution.h"
#include "../utilities/FileReader.h"
#include <iostream>

int main()
{
    const std::string inputFilename = "../inputs/day02.txt";
    FileReader fileReader(inputFilename);
    const auto input = fileReader.readLines();
    if (input.empty())
    {
        std::cerr << "Error reading input file: " << inputFilename << std::endl;
        return 1;
    }

    // Call the day01 functions
    std::cout << "Part 1: " << part1(input) << std::endl;
    std::cout << "Part 2: " << part2(input) << std::endl;

    return 0;
}
