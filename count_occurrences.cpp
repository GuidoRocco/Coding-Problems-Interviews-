/*
Write a function that counts the number of occurrences of a given character in a string s. 
*/ 
#include <iostream> 
#include <cctype> 
#include <vector> 
#include <algorithm>
using namespace std; 

int count_occurrences (string string_to_check, char c) 
{
	int size = string_to_check.size(); 
	int count = 0; 
	string temp_string = ""; 
	transform(string_to_check.begin(), string_to_check.end(), temp_string.begin(), ::tolower); 
	for(int i = 0; i < size; i++) 
	{
		if(temp_string[i] == c) 
		    count++; 
		}	
	
	return count; 
} 

//Main Function - Modify to insert your own test cases 

int main(void)
{
	string first_word = "Ottomano"; 
	string second_word = "Ottovolante"; 
	cout << count_occurrences(first_word, 'o') << endl << count_occurrences(second_word, 't') << endl 
	     <<count_occurrences("", 'c') << endl << count_occurrences("Sabrina", 's') << endl; 
	return 0; 
}
