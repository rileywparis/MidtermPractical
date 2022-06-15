// MidtermPractical.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <vector>
#include <string>

int main()
{
    std::string questions[5] = { "Which of the following colors is not on the United States flag?", "What day is New Years Eve?",
        "What is 4 + 4 / 2?", "What state is Full Sail University located in?", "What is the legal US drinking age?" };
    std::string choices[5][4] = { {"Red", "Black", "Blue", "White"},
        {"January 1st", "December 32nd", "January 31st", "December 31st"},
        {"6", "8", "2", "4"},
        {"California", "Florida", "New York", "Iowa"},
        {"18", "19", "21", "16"} };
    int answerKey[5] = { 2, 3, 0, 1, 2 };

    srand(time(NULL));
    int index = rand() % 5;
    std::cout << questions[index] << "\n";
    for (int i = 0; i < 4; i++)
        std::cout << i + 1 << ". " + choices[index][i] << "\n";
    
    int response = 0;
    std::cin >> response;
    while (response <= 0 || response > 4)
    {
        std::cout << "\nPlease enter number 1-4\n";
        std::cin >> response;
        if (std::cin.fail())
        {
            std::cin.clear();
            std::cin.ignore(INT_MAX, '\n');
        }
    }
    if (response - 1 == answerKey[index])
        std::cout << "\nCorrect!";
    else
        std::cout << "\nIncorrect";
}
