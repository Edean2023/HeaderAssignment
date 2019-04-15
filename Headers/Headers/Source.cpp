#include <iostream>
#include <string>
// includes the header file
#include "ListofActs.h"

using namespace std;

// This function displays a welcome message and calls other functions to display the rest of the program
int main()
{
	// displays a welcome message with spacers
	cout << "\n\n \t |||----------------|||";
	cout << "\n \t Welcome to the circus!";
	cout << "\n \t |||----------------|||\n\n";
	
	// changes the background color and text color
	system("color 1b");

	// calls the PrintOutCircusActs function
	PrintOutCircusActs();
	// calls the PrintOutEmployees function
	PrintOutEmployees();
	// calls the PrintOutHours function
	PrintOutHours();

	// pauses so user can read
	system("pause");
	// end program
	return 0;
}