#include "../utilities/FileReader.h"
#include "../utilities/AssertWithPrint.h"
#include "solution.h"
#include <iostream>
#include <cassert>

int main()
{
    // Test part 1
    const std::string inputFilename = "test_input_1.txt";
    FileReader fileReader(inputFilename);

    const auto lines = fileReader.readLines();

    int resultPart1 = part1(lines);

    ASSERT_WITH_PRINT(resultPart1, 142);

    // Test part 2
    const std::string inputFilename = "test_input_2.txt";
    FileReader fileReader(inputFilename);

    const auto lines = fileReader.readLines();

    int resultPart2 = part2(lines);

    ASSERT_WITH_PRINT(resultPart1, 281);

    std::cout
        << "Tests passed!" << std::endl;

    return 0;
}
