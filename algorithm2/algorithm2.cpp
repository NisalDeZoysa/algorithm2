#include <iostream>

#include "Header.h"

using namespace std;

int main()
{
	int* A = createRandomArray(10);
	printArray(A, 10);
	cout << "Sum of the array is: " << sumArray(A, 10) << endl;
	cout << "Position: " << searchArray(A, 10, 10001) << endl;
	exchangeSort(A, 10);
	printArray(A, 10);
}





