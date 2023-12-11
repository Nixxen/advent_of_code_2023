#include "solution.h"
#include "../utilities/FileReader.h"

int part1(const std::vector<std::string> &input)
{
    // Example line: pqr3stu8vwx
    // Extract the first and last number in each line and combine them into
    // two digit numbers, then sum the two digit numbers into a final number.
    // This is the return value.
    int sum = 0;
    for (const std::string &line : input)
    {
        int firstNumber = line.front() - '0';
        int lastNumber = line.back() - '0';
        int twoDigitNumber = firstNumber * 10 + lastNumber;
        sum += twoDigitNumber;
    }
    return sum;
}

int part2(const std::vector<std::string> &input)
{

    return 0;
}
