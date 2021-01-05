/*This program takes an input from the user and then
 * returns the sum of the squares of the numbers upto
 * that number.
 * 
 */

/*
 * THIS PROGRAM USES A LIBRARY THAT IS ONLY MEANT TO BE USED ON WINDOWS PLATFORM.
 * SO THIS PROGRAM CANNOT BE RAN ON OTHER PLATFORMS LIKE LINUX OR MAC OS X.
 */

#include <iostream>
#include <cmath>
#include <conio.h>  // For getch() function used later (only available for windows platform)

using namespace std;

int main(void) {
	int n(1), sum(0); // Initializing the variables to be used, n to take input from user and sum to store the answer

	while (1) {  // While loop to continue the program after calculating result for each number
		cout << "Enter a positive integer to calculate the sum of squares of all the numbers upto that number.\n";
		cin >> n;

		if (n <= 0) { // Checking if the numbers is not a positive integer
			cout << "Please enter a valid number. Only positive integers are supported.";
		}
		else { // n is positive integer here
			for (int i = 1; i <= n; i++) { // Calculating sum of squares of all numbers upto n
				sum += (int)pow(i, 2);
			}
			cout << "Sum of the numbers upto " << n << " = " << sum << endl << endl;
		}

		// Adding fucntionality to continue the program after calculating for one number
		cout << "Want to calculate for another number? [ y / n ]" << endl << endl;

		if (_getch() == 'y') {  // getch() to hold the cursor on screen and get character
			n = 1; // initializing both n and sum to initial values
			sum = 0;
			continue;
		}
		else {
			break;
		}
	} // End of while

	return 0;
}
