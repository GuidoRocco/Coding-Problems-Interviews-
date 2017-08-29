/* 
Implements Erathostene's Sieve. 
*/ 

#include <iostream>
#include <cmath>
#include <vector>
using namespace std; 

vector<int> erathostenes_sieve(int num)
{
	int size = num; 
	bool prime_boolvec[size]; 
	vector<int> primes; 
	for(int i = 0; i < size; i++)
	{
		prime_boolvec[i] = true; 
	}
	for(int i = 2; i < num; i++)
	{
		if(i <= sqrt(num) && prime_boolvec[i] == true) 
		{
			for(int j = i * i; j < num; j++) 
			{
				if(j % i == 0) 
				{
					prime_boolvec[j] = false; 
				}
			}
		}
	} 
	for(int i = 0; i < size; i++)
	{
		if(prime_boolvec[i] == true) 
		{
			primes.push_back(i); 
		}
	} 
	return primes; 
} 

int main(void)
{
	vector<int> test_vec;  
	test_vec = erathostenes_sieve(100); 
	cout << "Test vector: " << endl; 
	for(int i = 0; i < test_vec.size(); i++) 
	{
		cout << test_vec[i] << endl; 
	} 
	return 0; 
} 

