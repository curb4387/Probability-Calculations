#include <iostream>
#include <cmath>

/*
    This program calculates probability using the empirical probability formula,
    outputting the likelihood in percentage that an event may happen when an
    experiment is performed.
*/

/*
    need to:
    1) get user input
        - number of times event occurred
        - number of times experiment was performed
    2) validate user input using try-throw-catch
        - make sure both inputs are positive integers
        - make sure times event occurred is less than 
          times experiment was performed
        - make sure times experiment was performed is not 0
          times event occurred can be 0
    3) calculate empirical probability with user input
*/

// Function to validate user input, must be integer greater than or equal to 0
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

// Function to get user input
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

// Function to calculate empirical probability
double calculate_empirical(int event_num, int exp_num)
{
    return round(((event_num * 1.0) / exp_num) * 100);
}

// Function to validate the calculation
void validate_calculation(int ev, int ex)
{
    // Use try-catch to make sure times experiment was performed is greater than 0
    // and greater than or equal to the times the event occurred
    try
    {
        double prob = calculate_empirical(ev, ex);
        if (ev <= ex)
        {
            std::cout << "\nThe empirical probability is " << ev << " / "
                      << ex << " = " << prob << "%\n";
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
    }
}

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