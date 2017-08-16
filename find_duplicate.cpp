/* 
Write a function that, given an array and its size, prints the duplicate element in the array. Suppose that 
there exists only one duplicate element. 
A main function that tests some arrays is written. You can add your own cases. 
*/ 

#include <iostream> 
#include <vector> 
#include <map> 
#include <algorithm> 
using namespace std; 

void find_duplicate(int array [], int size) 
{
	map<int, int> array_map; 
	vector<int> vec_array; 
	bool is_duplicate = false; 
	for(int i = 0; i < size; i++) 
	{
		vec_array.push_back(array[i]); 
	} 
	for(int i = 0; i < vec_array.size(); i++) 
	{
		if(array_map.find(vec_array[i]) == array_map.end())
		{
			array_map[vec_array[i]] = 1; 
		} 
		
		else 
		{
			array_map[vec_array[i]]++; 
			is_duplicate = true; 
		} 
	} 
	for(map<int, int>::iterator iter = array_map.begin(); iter != array_map.end(); iter++)  
	{
		if(iter -> second > 1) 
		{
			cout << iter -> first << endl; 
		} 
	} 
	if(!is_duplicate) 
       cout << "0" << endl; 
	return; 
} 

int main(void) 
{
	int first_array[5] = {10, 5, 7, 8, 4}; 
	int second_array[5] = {10, 44, 20, 2, 10}; 
	int third_array[5] = {1, 2, 3, 4, 5}; 
	int fourth_array[5] = {22, 55, 22, 10, 30}; 
	cout << "The duplicate in the first array are: " << endl; 
	find_duplicate(first_array, 5); 
	cout << "The duplicate in the second array are: " << endl; 
	find_duplicate(second_array, 5); 
	cout << "The duplicate in the third array are: " << endl; 
	find_duplicate(third_array, 5); 
	cout << "The duplicate in the fourth array are: " << endl; 
	find_duplicate(fourth_array, 5); 
	return 0; 
	
} 
