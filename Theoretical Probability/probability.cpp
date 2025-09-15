#include <iostream>
#include <cmath>
#include <limits> // to use numeric_limits

/*
	This program calculates the probability of an event occurring and not occurring,
	given the total number of possible outcomes and the number of favorable outcomes.
*/

int main() {
	std::cout << "This program calculates the probability of an event occurring and not occurring.\n";

	// Prompt the user to enter the number of total outcomes
	std::cout << "\nEnter the total number of possible outcomes: ";
	int total_outcomes;

	// Validate the input
	bool valid_input = false;
	while (!valid_input)
	{
		if (std::cin >> total_outcomes && total_outcomes > 0)
		{
			valid_input = true;
		}
		else
		{
			std::cout << "Invalid input. Please enter a positive number.\n";
			// Clear errors
			std::cin.clear();
			// Discard invalid input
			// Need to add this or else infinite loop will occur
			std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
		}
	}
	
	// Prompt the user to enter the number of favorable outcomes
	std::cout << "\nEnter the number of favorable outcomes: ";
	int favorable_outcomes;

	// Validate the input
	valid_input = false;
	while (!valid_input)
	{
		if (std::cin >> favorable_outcomes && favorable_outcomes <= total_outcomes)
		{
			valid_input = true;
		}
		else if (favorable_outcomes > total_outcomes)
		{
			// Output a different message if favorable_outcomes is more than total
			std::cout << "That is not possible. Try again.\nRemember, your total possible outcomes is "
					  << total_outcomes << ".\n";
		}
		else
		{
			std::cout << "Invalid input. Please enter a positive number.\n";
			// Clear errors
			std::cin.clear();
			// Discard invalid input
			// Need to add this or else infinite loop will occur
			std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
		}
	}

	// Calculate possiblity of the event occuring and convert to percentage
	// Multiply by 1.0 for division, or else it will output 0
	double favorable_percentage = round((favorable_outcomes * 1.0 / total_outcomes) * 100);

	// Calculate percentage possibility of unfavorable outcomes occuring
	int unfavorable_percentage = 100 - favorable_percentage;

	// Output the answers to the user
	std::cout << "\nWith a total of " << total_outcomes << " possible outcomes and "
		<< favorable_outcomes << " possible favorable outcomes,\nthe possibility of a "
		<< "favorable event occurring is " << favorable_percentage << "%,\nand the "
		<< "possibility of it not occurring is " << unfavorable_percentage << "%.\n";

	return 0;
}