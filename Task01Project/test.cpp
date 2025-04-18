#include "logic.h"
#include <cassert>
#include <iostream>

using namespace std;

int main() {
	// Equivalence Classes (valid and invalid inputs) / Классы эквивалентности
	assert(find_largest_square_plot(1680, 640) == 80);
	assert(find_largest_square_plot(100, 100) == 100);
	assert(find_largest_square_plot(25, 100) == 25);
	assert(find_largest_square_plot(29, 17) == 1);
	assert(find_largest_square_plot(17, 29) == 1);
	assert(find_largest_square_plot(12, 15) == 3);
	assert(find_largest_square_plot(1, 0) == -1);
	assert(find_largest_square_plot(0, 1) == -1);
	assert(find_largest_square_plot(-6, 9) == -1);
	assert(find_largest_square_plot(9, -6) == -1);

	// Boundary values / Граничные значения
	assert(find_largest_square_plot(1, 1) == 1);
	assert(find_largest_square_plot(10, 1) == 1);
	assert(find_largest_square_plot(1, 10) == 1);
	assert(find_largest_square_plot(29, 17) == 1);
	assert(find_largest_square_plot(17, 29) == 1);
	assert(find_largest_square_plot(INT_MAX, INT_MAX) == INT_MAX);

	cout << "All tests pass successfully!" << endl;
	return 0;
}