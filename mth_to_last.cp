/* Write a program that, given a positive integer M and a list of integers L, outputs the list element M links away 
from the end of the list. 
For this program, we will use 1-indexing. That means mth_to_last(1) is the "1st-to-last" element, or simply the last element in the list. 
If the index is invalid, print "NIL" instead. 
You must solve this problem using (double-)linked lists. 
Source: HackerRank (www.hackerrank.com), Codinf for Interview practice problems. 
*/ 

#include <cmath>
#include <cstdio> 
#include <string> 
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std; 

struct Node 
{
    int value; 
    struct Node * next; 
    struct Node * prev; 
} 
; 

void split(const string& s, char delim,vector<string>& v) {
    auto i = 0;
    auto pos = s.find(delim);
    while (pos != string::npos) {
      v.push_back(s.substr(i, pos-i));
      i = ++pos;
      pos = s.find(delim, pos);

      if (pos == string::npos)
         v.push_back(s.substr(i, s.length()));
    }
}


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    int index_to_search; 
    string string_to_analize; 
    vector<string> string_vec; //Here I will put the values of the double-linked list. 
    Node * head = new Node(); 
    Node * temp = new Node(); 
    cin >> index_to_search; 
    cin.ignore(); 
    getline(cin, string_to_analize); 
    split(string_to_analize, ' ', string_vec); 
    vector<int> int_vec; 
    for(int i = 0; i < string_vec.size(); i++) 
    {
        int t_int = stoi(string_vec[i]); 
        int_vec.push_back(t_int); 
    } 
    if(int_vec.size() == 0 || (index_to_search > int_vec.size())) 
    {
        cout << "NIL"  << endl; 
        return 0; 
    } 
    head -> value = int_vec[0]; 
    temp = head; 
    if(int_vec.size() == index_to_search) 
      {
        cout << head -> value <<endl; 
        return 0; 
      }
    for(int i = 1; i < int_vec.size(); i++) 
    {
        Node * new_el = new Node(); 
        new_el -> value = int_vec[i]; 
        new_el -> prev = temp; 
        new_el -> prev -> next = new_el; //Insert a new node into the double-linked list. Initialize a new node, called new_el. 
        new_el -> next = NULL; // Sets its value appropriately, then connects the new node to the previous one. 
        temp = new_el; 
    } 
    int step = 1; 
    if(temp == head) 
    {
        cout <<temp -> value <<endl; 
        return 0; 
    }
    while(step < index_to_search && temp -> prev != head) 
    {
        temp = temp -> prev; //Search the double-linked list backwards until the mth-to-last value is reached. 
        step++; 
    } 
    cout << temp -> value << endl; 
    return 0;
} 
