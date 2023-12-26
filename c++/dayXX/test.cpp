#include "../utilities/FileReader.h"
#include "../utilities/AssertWithPrint.h"
#include "solution.h"
#include <iostream>
#include <cassert>

int main()
{
    // Test part 1
    const std::string inputFilename1 = "test_input_1.txt";
    FileReader fileReader1(inputFilename1);
    const auto lines1 = fileReader1.readLines();
    int resultPart1 = part1(lines1);
    ASSERT_WITH_PRINT(resultPart1, 42);

    // Test part 2
    const std::string inputFilename2 = "test_input_2.txt";
    FileReader fileReader2(inputFilename2);
    const auto lines2 = fileReader2.readLines();
    int resultPart2 = part2(lines2);
    ASSERT_WITH_PRINT(resultPart2, 42);

    std::cout
        << "Tests passed!" << std::endl;

    return 0;
}
