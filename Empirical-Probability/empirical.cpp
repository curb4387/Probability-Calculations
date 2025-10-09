#include <iostream>
#include <cmath>
#include "empirical.h"

/*
    This program calculates probability using the empirical probability formula,
    outputting the likelihood in percentage that an event may happen when an
    experiment is performed.
*/

bool validate_input(int num)
{
    bool validity;
    if (num >= 0)
    {
        validity = true;
    }
    else
    {
        validity = false;
    }

    return validity;
}

int input_number()
{
    int user_num;
    std::cout << "Enter a positive integer: ";
    std::cin >> user_num;

    while (!(validate_input(user_num)))
    {
        std::cout << "Number not valid. Enter a positive integer: ";
        std::cin >> user_num;
    }

    return user_num;
}

double calculate_empirical(int event_num, int exp_num)
{
    return round(((event_num * 1.0) / exp_num) * 100);
}

double validate_calculation(int ev, int ex)
{
    // Times experiment was performed is greater than 0
    // and greater than or equal to the times the event occurred
    try
    {
        if (ev <= ex)
        {
            double prob = calculate_empirical(ev, ex);
            return prob;
        }
        else if (ex == 0)
        {
            throw(ex);
        }
        else
        {
            throw(ev);
        }
    }
    catch (int e)
    {
        std::cout << "\nThe calculation is impossible. Please try again.\n";
        double prob = -1;
        return prob;
    }
}