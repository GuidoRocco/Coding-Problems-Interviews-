/* 
Write a function that checks if a number is prime. 
A main function with some tests is also provided. 
*/ 

#include <iostream> 
using namespace std; 

bool is_prime(int n) 
{
	int count = 0; 
	for(int i = 1; i < n; i++) 
	{
		if(n % i == 0) 
		  count++; 
	} 
	
	return count == 1; 
} 

int main(void) 
{
	cout << is_prime(2) << endl << is_prime(3) << endl << is_prime(5) << endl 
	     << is_prime(10) << endl << is_prime(200) << endl << is_prime(59) 
	     << endl; 
	return 0; 
}
