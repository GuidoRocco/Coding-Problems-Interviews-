/* 
Write a function that, given an array and its size, print the maximum element of the array. 
A main function with some test cases is also provided. 
*/ 

#include <iostream> 
using namespace std; 

int maximum_element(int array [], int size) 
{
	int max = -1; 
	for(int i = 0; i < size; i++) 
	{
		if(array[i] > max) 
		  max = array[i]; 
	} 
	
	return max; 
	
}

int main(void) 
{
	int first_array[] = {10, 4, 5, 6, 2}; 
	int second_array[] = {5, 2, 70, 3, 1}; 
	int third_array[] = {1, 2, 3, 4, 5}; 
	int fourth_array[] = {100, 1000, 1, 3, 2}; 
	cout << "Maximum element in first array is: " << maximum_element(first_array, 5) << endl; 
	cout << "Maximum element in second array is: " << maximum_element(second_array, 5) << endl; 
	cout << "Maximum element in third array is: " << maximum_element(third_array, 5) << endl; 
	cout << "Maximum element in fourth array is: " << maximum_element(fourth_array, 5) << endl; 
	return 0; 
} 

