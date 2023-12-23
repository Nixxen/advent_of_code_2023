#include "solution.h"
#include "../utilities/FileReader.h"

int part1(const std::vector<std::string> &input)
{
    // Example line: pqr3stu8vwx
    // Abstract logic:
    //   Loop through input lines.
    //   Trim front letters until number is encountered. Store that number, firstNumber
    //   Trim end letters until number is encountered. Store that number, lastNumber
    //   Combine numbers (first*10 + last)
    //   Sum numbers.
    //   The final sum is the return value.
    int sum = 0;
    for (const std::string &line : input)
    {
        
        int firstNumber = firstNumberFromFront(line);
        int lastNumber = firstNumberFromBack(line);
        int twoDigitNumber = firstNumber * 10 + lastNumber;
        sum += twoDigitNumber;
    }
    return sum;
}

int firstNumberFromFront(const std::string &line)
{
    int firstNumber = 0;
    int index = 0;
    while (index < line.size() && !isdigit(line[index]))
    {
        index++;
    }
    firstNumber = (line[index] - '0');
    return firstNumber;
}

int firstNumberFromBack(const std::string &line)
{
    int lastNumber = 0;
    int index = line.size() - 1;
    while (index >= 0 && !isdigit(line[index]))
    {
        index--;
    }
    lastNumber = (line[index] - '0');
    return lastNumber;
}

int part2(const std::vector<std::string> &input)
{

    return 0;
}
