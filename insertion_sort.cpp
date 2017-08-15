/* 
Implements the Insertion Sort. An auxiliary function print_array is defined (it simply prints a given array). 
A main function for testing the method is also provided. 
*/ 

#include <iostream> 
#include <cctype> 
#include <vector> 
#include <map> 
#include <algorithm>
using namespace std; 

void insertion_sort(int array[], int size) 
{
	int value; 
	int j; 
	for(int i = 0; i < size; i++) 
	{
		value = array[i]; 
		j = i - 1; 
		while(j >= 0 && array[j] > value) 
		{
			array[j+1] = array[j]; 
			j--; 
		} 
		
		array[j+1] = value; 
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

//Main Function - Test also your own cases! 

int main()
{
    int array[] = {12, 21, 18, 30, 4};
    int size = sizeof(array)/sizeof(array[0]);
 
    insertion_sort(array, size);
    print_array(array, size); 
    return 0;
} 

