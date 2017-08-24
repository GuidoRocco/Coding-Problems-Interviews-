/* 
Write a function that computes the number of (proper) divisors of a given integer. 
A main function is provided in order to test the function. 
*/ 

#include <iostream> 
#include <algorithm> 
using namespace std; 

int sum_divisors(int num) 
{
	int i = 1; 
	int count = 0; 
	while(i < num) 
	{
		if(num % i == 0) 
		{
			count += i; 
		} 
		
		i++; 
	} 
	return count; 
}

int main(void) 
{
	cout << sum_divisors(10) << endl << sum_divisors(8) << endl 
	     << sum_divisors(20) << endl << sum_divisors(100) << endl; 
	return 0; 
	} 

