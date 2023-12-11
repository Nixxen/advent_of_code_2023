#include "../../utilities/FileReader.h"
#include "../../day01/main.cpp"
#include <iostream>
#include <cassert>

int main()
{
    const std::string inputFilename = "test_input.txt";
    FileReader fileReader(inputFilename);

    // Test solution
    // ...

    // Example test
    const auto lines = fileReader.readLines();
    assert(day01part1(lines) == 123); // Adjust based on your specific return type
    assert(day01part2(lines) == 456); // Adjust based on your specific return type

    std::cout << "Tests passed!" << std::endl;

    return 0;
}
