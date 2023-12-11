#include "../../utilities/FileReader.h"
#include "../../day01/solution.h"
#include <iostream>
#include <cassert>

int main()
{
    const std::string inputFilename = "test_input.txt";
    FileReader fileReader(inputFilename);

    // Example test
    const auto lines = fileReader.readLines();
    assert(part1(lines) == 142);
    // assert(part2(lines) == 456);

    std::cout << "Tests passed!" << std::endl;

    return 0;
}
