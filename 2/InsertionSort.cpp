


#include <iostream>

#include <stdlib.h>
#include <stdio.h>

using namespace std;

#define NUM_ITEMS 1000

void insertionSort(int numbers[], int array_size);
int numbers[NUM_ITEMS];

//Insertion Sort: Complexity O(n^2)
//sufficient for couple of thousands 
void insertionSort(int numbers[], int array_size)
{
	int i, j, index;
	for (i=1; i < array_size; i++)
	{
		index = numbers[i];
		j = i;
		while ((j > 0) && (numbers[j-1] > index ))
		{
			numbers[j] = numbers[j-1];
			j = j - 1;
		}
		numbers[j] = index;
	}
}


int main(){
	int i;
	//seed random number generator
	srand(getpid());

	//
	for (i = 0; i < NUM_ITEMS; i++)
		numbers[i] = rand();

	//preform bubble sort on the array
	insertionSort(numbers, NUM_ITEMS);

	printf("Done with Sorting.\n" );
	for (i = 0; i < NUM_ITEMS; i++)
		printf("%i\n", numbers[i]);

}