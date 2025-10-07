#ifndef THEORETICAL_H
#define THEORETICAL_H

/*
    Function to validate user input, must be integer greater than or equal to 0
    @param int num number to validate
    @return bool
*/
bool validate_input(int num);

/*
    Function to get user input
    @return int
*/
int input_number();

/*
    Function to calculate theoretical probability
    @param int favor number of favorable outcomes
    @param int total number of total outcomes
    @return double
*/
double calculate_theoretical(int favor, int total);

/*
    Function to validate the calculation
    @param int favor number of favorable outcomes
    @param int total number of total outcomes
*/
void validate_calculation(int favor, int total);

#endif