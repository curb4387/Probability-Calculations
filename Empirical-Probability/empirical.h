#ifndef EMPIRICAL_H
#define EMPIRICAL_H

/* Function to validate user input, must be integer greater than or equal to 0
   @param int num number to validate
   @return bool 
*/
bool validate_input(int num);

/* Function to get user input
   @return int
*/
int input_number();

/* Function to calculate empirical probability
   @param int ev number of times event occurred
   @param int ex number of times experiment was performed
   @return double
*/
double calculate_empirical(int ev, int ex);

/* Function to validate the calculation
   @param int ev number of times event occurred
   @param int ex number of times experiment was performed
*/
double validate_calculation(int ev, int ex);

#endif