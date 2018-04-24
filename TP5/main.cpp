#include <iostream>
#include "sort.h"

/*
10)
*/

int doubloInt(double x) {

	return x;
}

/*
11)
*/
float charAfloat(char m) {
	return m;
}

void* intAptr(int n) {
	float(*ptrFunc3)(char) = charAfloat;
	return ptrFunc3;
}

int main() {


	/*
	8)
	*/

	int array[10] = { 10,5,1,9,3,4,8,2,6,7 };

	std::cout << "\nLista sin Ordenar.\n";

	for (int i = 0; i < 10; i++) {
		std::cout << array[i] << ",";
	}

	qSort(array, 0, 9);


	std::cout << "\nLista Ordenada.\n";

	for (int i = 0; i < 10; i++) {
		std::cout << array[i] << ",";
	}


	/*
	9)
	*/
	
	const int x = 5;
	int *p = (int *)&x;
	std::cout<<x<<std::endl;
	*p = 10;
	std::cout << x;
	

	/*
	10)
	*/

	int (*ptrFunc) (double)= doubloInt;

	std::cout <<std::endl<< ptrFunc(33.9858) << std::endl;

	/*
	11)
	*/

	void* (*ptrFunc2) (int) = intAptr;
	intAptr(10);
}

