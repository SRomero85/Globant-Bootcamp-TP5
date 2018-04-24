#include <iostream>



void qSort(int *array, int izq, int der) {

	int i = izq;
	int j = der;
	int temp;
	int pivot = array[(izq + der) / 2];

	while (i <= j) {

		while ( array[i] < pivot) {

			i++;

		}
		while ( array[j] > pivot) {

			j--;

		}
		if (i <= j) {

			temp = array[i];
			array[i] = array[j];
			array[j] = temp;
			i++;
			j--;

		}

	}
	if (izq < j) {
		qSort(array, izq, j);

	}
	if (i < der) {
		qSort(array, i, der);
	}

}