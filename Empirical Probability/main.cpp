#include <iostream>
#include "empirical.cpp"

int main()
{
    // Tell the user how to use the program
    std::cout << "To calculate the empirical probability of your experiment:\n"
              << "1) Enter the number of times the favorable event occured,\n"
              << "2) Enter the number of times the experiment was performed.\n";

    std::cout << "\nNumber of times the favorable event occurred\n";
    int event = input_number();

    std::cout << "Number of times the experiment was performed\n";
    int experiment = input_number();

    validate_calculation(event, experiment);

    return 0;
}