#include "../utilities/FileReader.h"
#include <iostream>
#include <vector>

int day01part1(const std::vector<std::string> &input)
{
    // Implement day 01, part 1 logic
    // ...

    return 0; // Adjust based on your specific return type
}

int day01part2(const std::vector<std::string> &input)
{
    // Implement day 01, part 2 logic
    // ...

    return 0; // Adjust based on your specific return type
}

int main()
{
    const std::string inputFilename = "../inputs/day01.txt"; // Adjust based on your project structure
    FileReader fileReader(inputFilename);
    const auto input = fileReader.readLines();

    // Call the day01 functions
    std::cout << "Part 1: " << day01part1(input) << std::endl;
    std::cout << "Part 2: " << day01part2(input) << std::endl;

    return 0;
}