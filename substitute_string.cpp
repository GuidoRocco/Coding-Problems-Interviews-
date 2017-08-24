/* 
Write a function in C++ that substitute all the occurrences of a given string with another given string. 
*/ 

#include <iostream> 
#include <algorithm> 
using namespace std; 

string substitute_string(string s, string string_to_replace, string new_string) 
{
	for(string::size_type i = 0; (i = s.find(string_to_replace, i)) != string::npos; ) 
	{
		s.replace(i, string_to_replace.length(), new_string); 
		i+=1; 
	} 
	return s; 
} 

