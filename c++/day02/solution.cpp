#include "solution.h"
#include "../utilities/FileReader.h"
#include <iostream>

int part1(const std::vector<std::string> &input)
{
    // Problem:
    //   Determine which games would have been possible if the bag had been
    //   loaded with only 12 red cubes, 13 green cubes, and 14 blue cubes.
    //   What is the sum of the IDs of those games?
    // Example line:
    //   Game 1: 3 blue, 4 red; 1 red, 2 green, 6 blue; 2 green
    // Abstract logic:
    //   Set color limits
    //   Loop through lines
    //   Parse line:
    //     Extracting color limits for that line
    //     Each ; separates a round of a game.
    //     Each round starts with all color-cubes back in the bag.
    //   If no color exceed its limit, add the ID to a sum
    //   If a color exceed its limit, skip the line
    //   Return the sum

    int sum = 0;

    // TODO: Where did my hashmaps go... Worked yesterday.
    std::map<std::string, int> colorLimits = {
        {"red", 12},
        {"green", 13},
        {"blue", 14}};
    for (const std::string &line : input)
    {

        std::string lineCopy = line;
        std::string token;
        std::string delimiter = ";";
        size_t pos = 0;
        while ((pos = lineCopy.find(delimiter)) != std::string::npos)
        {
            token = lineCopy.substr(0, pos);
            // TODO: Finish this train of through.
        }
    }
}
int part2(const std::vector<std::string> &input)
{
    // Example input:
    // Abstract logic:
    return 0;
}
