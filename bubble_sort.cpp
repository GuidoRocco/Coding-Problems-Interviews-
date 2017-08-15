/* 
Implement the bubble sort algorithm. 
I will use an auxiliary function named swap that swaps two element of an array. 
A main function for testing the algorithm is included. 
*/ 

#include <iostream> 
#include <cctype> 
#include <vector> 
#include <map> 
#include <algorithm>
using namespace std; 

void swap(int *x_pos, int *y_pos) 
{
	int temp = *x_pos; 
	*x_pos = *y_pos; 
	*y_pos = temp; 
	return; 
} 
; 

void bubble_sort(int array[], int size) 
{
	for(int i = 0; i < size - 1; i++) 
	{
		for(int j = 0; j < size - i - 1; j++) 
		{
			if(array[j] > array[j+1]) 
			  swap(&array[j], &array[j+1]); 
		}
	} 
	
	return; 
} 
; 

void print_array(int array[], int size) 
{
	for(int i = 0; i < size; i++) 
	{
		cout << array[i] <<" "; 
	} 
	
	cout << endl; 
	return; 
} 

//Main Function - You can personalize the array or add new arrays to the main function. 

int main(void)
{
    int array[] = {64, 34, 25, 12, 22, 11, 90};
    int size = sizeof(array)/sizeof(array[0]);
    bubble_sort(array, size);
    cout << "Sorted Array: "; 
	print_array(array, size); 
	cout << endl; 
    return 0; 
} 
