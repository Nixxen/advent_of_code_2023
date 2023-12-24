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

    ASSERT_WITH_PRINT(resultPart1, 142);

    // Test number replacer
    ASSERT_WITH_PRINT(convertAnyStringNumbers("one"), "1");
    ASSERT_WITH_PRINT(convertAnyStringNumbers("two"), "2");
    ASSERT_WITH_PRINT(convertAnyStringNumbers("three"), "3");
    ASSERT_WITH_PRINT(convertAnyStringNumbers("four"), "4");
    ASSERT_WITH_PRINT(convertAnyStringNumbers("five"), "5");
    ASSERT_WITH_PRINT(convertAnyStringNumbers("six"), "6");
    ASSERT_WITH_PRINT(convertAnyStringNumbers("seven"), "7");
    ASSERT_WITH_PRINT(convertAnyStringNumbers("eight"), "8");
    ASSERT_WITH_PRINT(convertAnyStringNumbers("nine"), "9");
    ASSERT_WITH_PRINT(convertAnyStringNumbers("oneone"), "11");
    ASSERT_WITH_PRINT(convertAnyStringNumbers("4nine"), "49");
    ASSERT_WITH_PRINT(convertAnyStringNumbers("4nineeightseven2"), "49872");
    ASSERT_WITH_PRINT(convertAnyStringNumbers("abcone2threexyz"), "abc123xyz");

    // Test part 2
    const std::string inputFilename2 = "test_input_2.txt";
    FileReader fileReader2(inputFilename2);

    const auto lines2 = fileReader2.readLines();

    int resultPart2 = part2(lines2);

    ASSERT_WITH_PRINT(resultPart2, 281);

    std::cout
        << "Tests passed!" << std::endl;

    return 0;
}
