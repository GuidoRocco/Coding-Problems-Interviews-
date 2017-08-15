/*
Problem: 
A kidnapper wrote a ransom note but is worried it will be traced back to him. 
He found a magazine and wants to know if he can cut out whole words from it and use them 
to create an untraceable replica of his ransom note. 
The words in his note are case-sensitive and he must use whole words available in the magazine, 
meaning he cannot use substrings or concatenation to create the words he needs.
Given the words in the magazine and the words in the ransom note, print Yes if he can replicate his ransom note exactly 
using whole words from the magazine; otherwise, print No. 

Input: The first line contains two space-separated integers describing the respective values of m 
(the number of words in the magazine) and n (the number of words in the ransom note). 
The second line contains m space-separated strings denoting the words present in the magazine. 
The third line contains n space-separated strings denoting the words present in the ransom note.

Source: HackerRank (www.hackerrank.com), Cracking the Coding Interview 
*/ 
#include <map>
#include <set>
#include <list>
#include <cmath>
#include <ctime>
#include <deque>
#include <queue>
#include <stack>
#include <string>
#include <bitset>
#include <cstdio>
#include <limits>
#include <vector>
#include <climits>
#include <cstring>
#include <cstdlib>
#include <fstream>
#include <numeric>
#include <sstream>
#include <iostream>
#include <algorithm>
#include <unordered_map>

using namespace std;

bool ransom_note(vector<string> magazine, vector<string> ransom) {
    
}

int main(){
    int m;
    int n;
    cin >> m >> n;
    vector<string> magazine(m);
    for(int magazine_i = 0;magazine_i < m;magazine_i++){
       cin >> magazine[magazine_i];
    }
    vector<string> ransom(n);
    for(int ransom_i = 0;ransom_i < n;ransom_i++){
       cin >> ransom[ransom_i];
    }
    if(ransom_note(magazine, ransom))
        cout << "Yes\n";
    else
        cout << "No\n";
    return 0;
}
