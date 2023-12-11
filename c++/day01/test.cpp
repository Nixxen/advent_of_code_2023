#include "../utilities/FileReader.h"
#include "../utilities/assert_with_print.h"
#include "solution.h"
#include <iostream>
#include <cassert>

int main()
{
    const std::string inputFilename = "test_input.txt";
    FileReader fileReader(inputFilename);

    // Example test
    const auto lines = fileReader.readLines();

    int result1 = part1(lines);

    // assertWithPrint(result1, 142, "result1");
    int x = 42;
    int y = 43;
    ASSERT_WITH_PRINT(x, 42);
    ASSERT_WITH_PRINT(y, 42);
    // assert(part2(lines) == 456);

    std::cout
        << "Tests passed!" << std::endl;

    return 0;
}
