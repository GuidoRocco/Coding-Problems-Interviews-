/*
Solves the FizzBuzz problem: that is, write a loop from 1 to 100. If the number is divisible by 3, print Fizz. 
If it is divisible by 5, print Buzz. If it is divisible by 3 and 5, print FizzBuzz. 
Else, print the number. 
*/ 

#include <iostream> 
using namespace std; 

int main (void) 
{
	for(int i = 1; i <= 100; i++) 
	{
		if(i % 3 == 0 && i % 5 !=0) 
		  cout << "Fizz" << endl; 
		else if (i % 3 !=0 && i % 5 == 0) 
		  cout << "Buzz" << endl; 
		else if (i % 3 == 0 && i % 5 == 0) 
		  cout << "FizzBuzz" << endl; 
		else 
		  cout << i << endl; 	} 
		  
	return 0; 
} 
