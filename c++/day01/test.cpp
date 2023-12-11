#include "../utilities/FileReader.h"
#include "../utilities/AssertWithPrint.h"
#include "solution.h"
#include <iostream>
#include <cassert>

int main()
{
    const std::string inputFilename = "test_input.txt";
    FileReader fileReader(inputFilename);

    // Example test
    const auto lines = fileReader.readLines();

    int resultPart1 = part1(lines);

    ASSERT_WITH_PRINT(resultPart1, 142);
    // assert(part2(lines) == 456);

    std::cout
        << "Tests passed!" << std::endl;

    return 0;
}
