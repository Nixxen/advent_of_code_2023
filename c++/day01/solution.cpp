#include "solution.h"
#include "../utilities/FileReader.h"
#include <regex>
#include <iostream>

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
    // Same as part 1, but some of the digits are spelled out with letters:
    //   one, two, three, four, five, six, seven, eight, and nine
    //   also count as valid "digits".
    // Example input: abcone2threexyz
    // Abstract logic:
    //   Convert string numbers to digits.
    //   Parse as in part one.

    int sum = 0;
    for (const std::string &line : input)
    {
        std::string convertedLine = convertAnyStringNumbers(line);
        int firstNumber = firstNumberFromFront(convertedLine);
        int lastNumber = firstNumberFromBack(convertedLine);
        int twoDigitNumber = firstNumber * 10 + lastNumber;
        sum += twoDigitNumber;
    }

    return sum;
}

std::string convertAnyStringNumbers(const std::string &line)
{
    std::regex numberRegex("one|two|three|four|five|six|seven|eight|nine");
    std::smatch matches;
    std::string convertedLine = line;
    while (std::regex_search(convertedLine, matches, numberRegex))
    {
        std::string match = matches.str();
        int digit = convertStringToDigits(match);
        convertedLine.replace(matches.position(), match.size(), std::to_string(digit));
    }
    return convertedLine;
}

int convertStringToDigits(const std::string &stringNumber)
{
    if (stringNumber == "one")
    {
        return 1;
    }
    else if (stringNumber == "two")
    {
        return 2;
    }
    else if (stringNumber == "three")
    {
        return 3;
    }
    else if (stringNumber == "four")
    {
        return 4;
    }
    else if (stringNumber == "five")
    {
        return 5;
    }
    else if (stringNumber == "six")
    {
        return 6;
    }
    else if (stringNumber == "seven")
    {
        return 7;
    }
    else if (stringNumber == "eight")
    {
        return 8;
    }
    else if (stringNumber == "nine")
    {
        return 9;
    }
    else
    {
        // Throw
        std::cerr << "Error: invalid string number: " << stringNumber << std::endl;
    }
}
