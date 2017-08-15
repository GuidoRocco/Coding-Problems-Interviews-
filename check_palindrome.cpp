/* 
Write a function that checks if a string is palindrome. You can personalize the main function to check various strings. 
*/ 

#include <iostream> 
#include <cctype> 
#include <vector> 
#include <algorithm>
using namespace std; 

bool check_palindrome (string string_to_check) 
{
	int size = string_to_check.size(); 
	string temp_string = ""; 
	transform(string_to_check.begin(), string_to_check.end(), temp_string.begin(), ::tolower); 
	for(int i = 0; i < size - 1; i++) 
	{
		if(temp_string[i] != temp_string[size - i - 1]) 
		    return false; 
		}	
	
	return true; 
} 

//Main Function - Checking some simple words 

int main(void)
{
	string pal = "Otto"; 
	string non_pal = "Ottovolante"; 
	cout <<check_palindrome(pal) <<endl << check_palindrome(non_pal) <<endl 
	     << check_palindrome("Anna") <<endl <<check_palindrome("Maurizio") <<endl; 
	return 0; 
}
