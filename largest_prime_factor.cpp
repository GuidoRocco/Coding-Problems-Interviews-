/* 
Write a function that, given a number n, returns the largest prime fator of the number. 
An auxiliary function is_prime is defined (it checks if the number i in the for loop is prime. 
*/ 

#include <iostream> 
using namespace std; 

bool is_prime(long long n) 
{
	long count = 0; 
	for(long long i = 1; i < n; i++) 
	{
		if(n % i == 0) 
		  count++; 
	} 
	
	return count == 1; 
} 

long long largest_prime_factor(long long n) 
{
	long long max_prime_factor = 1; 
	for(long long i = 1; i <= n; i++) 
	{
		if(is_prime(i) && ((n % i) == 0)) 
		  {
		     max_prime_factor = i; 
		     n/=i; 
		 } 
	} 
  
  return max_prime_factor; 
  } 
  
