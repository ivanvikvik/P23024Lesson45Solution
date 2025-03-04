#include "util.h"
#include "logic.h"

int main() {
	int* pointer;
	int size;

	cout << "Input size of array: ";
	cin >> size;

	pointer = new int[size];

	init(pointer, size, -20, 20);
	cout << "Array: " << convert(pointer, size) << endl;

	cout << "Does local min exist? - " <<
		(check_local_min(pointer, size) ? "Yes" : "No") << endl;

	cout << "Does local max exist? - " <<
		(check_local_max(pointer, size) ? "Yes" : "No") << endl;
	
	return 0;
}