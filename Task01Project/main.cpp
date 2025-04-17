#include <iostream>
#include "logic.h"

using namespace std;

int main(void)
{
	int length, width;

	cout << "=== Land Vision Calculator ===" << endl;
	cout << "This program calculate biggest possible " <<
		"sqaure plots for your land" << endl;

	cout << "Input length and width of your land (meters): ";
	cin >> length >> width;

	if (width > length)
	{
		int* temp = new int;
		*temp = width;
		width = length;
		length = *temp;
		delete temp;
	}

	int* result = new int;
	*result = find_largest_square_plot(length, width);

	if (*result == -1)
	{
		cout << "Error. Invalid user input." << endl;
		return -1;
	}

	cout << "The largest possible plots are " << *result << " m x "
		<< *result << " m\n";

	delete result;
}