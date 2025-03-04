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

	int count;
	int* indices = get_local_min_indices(pointer, size, &count);

	cout << "Indices of local min: " << convert(indices, count) << endl;

	indices = get_local_max_indices(pointer, size, &count);

	cout << "Indices of local max: " << convert(indices, count) << endl;
	
	delete[] pointer;
	
	return 0;
}