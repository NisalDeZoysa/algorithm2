#pragma once

#include <iostream>
#include <cstdlib>

using namespace std;

void printArray(int* A, int size) {
	for (int i = 0; i < size; i++) {
		cout << A[i] << " ";
	}
	cout << endl;
}

int* createRandomArray(int size) {
	int* A = new int[size];
	for (int i = 0; i < size; i++) {
		A[i] = rand() % 1000;
	}
	return A;
}

int sumArray(int* A, int size) {
	int sum = 0;
	for (int i = 0; i < size; i++) {
		sum = sum + A[i];
	}
	return sum;
	//cout << "Sum of the array is: " << sum << endl;
}

int searchArray(int* A, int size, int key) {
	int index = -1;						//return -1, if not found__ return the index if found
	int i;
	for (i = 0; i < size; i++) {
		if (key == A[i]) {
			return i;
		}
	}
	if (i == size) {
		return -1;
	}
}

void exchangeSort(int* A, int size) {
	for (int i = 0; i < size-1; i++) {
		for (int j = i + 1; j < size; j++) {
			if (A[i] > A[j]) {
				int temp = A[j];
				A[j] = A[i];
				A[i] = temp;
			}
		}
	}
}