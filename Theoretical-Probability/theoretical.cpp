#include <iostream>
#include "../Empirical-Probability/empirical.h"

/*
    This program calculates probability using the theoretical probability formula,
    outputting the likelihood in percentage that a favorable event may happen given
    the total number of outcomes.

    This uses the same formula as Empirical Probability, so it will use the same
    file where Empirical Probability's functions are declared.
*/

int main()
{
    // Tell the user how to use the program
    std::cout << "This program calculates the probability of an event occurring and not occurring.\n"
              << "\nTo calculate the theoretical probability of an event:\n"
              << "1) Enter the total number of possible outcomes,\n"
              << "2) Enter the number of favorable outcomes.\n";

    std::cout << "\nTotal number of possible outcomes\n";
    int total_outcomes = input_number();

    std::cout << "\nNumber of favorable outcomes\n";
    int favorable_outcomes = input_number();

    double probability = validate_calculation(favorable_outcomes, total_outcomes);

    if (probability > -1)
    {
        std::cout << "\nThe theoretical probability of the favorable event occurring is "
                  << favorable_outcomes << " / " << total_outcomes << " = " << probability << "%\n";

        std::cout << "\nThe theoretical probability of the favorable event not occurring is "
                  << 100 - probability << "%\n";
    }

    return 0;
}