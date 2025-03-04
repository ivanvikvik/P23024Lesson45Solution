#include "logic.h"

bool check_local_min(int* array, int size) {
	if (size > 1 && (array[0] < array[1] 
		|| array[size - 1] < array[size - 2])) {
		return true;
	}

	for (int i = 1; i < size - 1; i++)
	{
		if (array[i] < array[i - 1] 
			&& array[i] < array[i + 1]) {
			return true;
		}
	}

	return false;
}


bool check_local_max(int* array, int size) {
	if (size > 1 && (array[0] > array[1]
		|| array[size - 1] > array[size - 2])) {
		return true;
	}

	for (int i = 1; i < size - 1; i++)
	{
		if (array[i] > array[i - 1]
			&& array[i] > array[i + 1]) {
			return true;
		}
	}

	return false;
}