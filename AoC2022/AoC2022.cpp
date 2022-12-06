 // AoC2022.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "inputs.hpp"
#include <crtdbg.h>
#include "../Core/Calories.h"
#include "../Core/RockPaperScissors.h"
#include "../Core/RuckSacks.h"

int main()
{    
    _CrtSetDbgFlag(_CRTDBG_ALLOC_MEM_DF | _CRTDBG_LEAK_CHECK_DF);
    {
        std::cout << "--- Day 01 ---" << std::endl;
        Calorie_Counting cal;
        cal.parseInput(day1Input);
        std::cout << "Answer 1: " << cal.GetMostCalories() << std::endl;
        std::cout << "Answer 2: " << cal.GetTopThreeTotal() << std::endl;
    }

    {
        std::cout << "--- Day 02 ---" << std::endl;
        RockPaperScissors rpc;
        rpc.parseInput(day2Input);
        std::cout << "Answer 1: " << rpc.GetTotalScorePart1() << std::endl;
        std::cout << "Answer 2: " << rpc.GetTotalScorePart2() << std::endl;
    }
    
    {
        std::cout << "--- Day 03 ---" << std::endl;
        RuckSacks rs;
        std::cout << "Answer 1: " << rs.ParseForPriorityPerLine(day3Input) << std::endl;
        std::cout << "Answer 2: " << rs.ParseForPriorityPerGroup(day3Input) << std::endl;
    }
}
 