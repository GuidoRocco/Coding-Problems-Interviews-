using System;
using System.Collections.Generic;
using System.IO;
using System.Linq;
class Solution {

    static void Main(String[] args) { 
        string a = Console.ReadLine();
        string b = Console.ReadLine(); 
        if(a == b) 
            Console.WriteLine(0); 
        else 
        { 
          int diff_words = 0; 
          Dictionary<char, int> occ_dict = new Dictionary<char, int>(); 
          foreach(char element in a) 
          { 
            if(!occ_dict.ContainsKey(element)) 
                occ_dict.Add(element, 1); 
            else 
                occ_dict[element]++; 
          } 
            
          foreach(char other_element in b) 
          { 
            if(!occ_dict.ContainsKey(other_element)) 
            { 
              diff_words++; 
            } 
            else if(occ_dict.ContainsKey(other_element) && occ_dict[other_element] == 0) 
            { 
              diff_words++; 
            } 
            else 
            { 
              occ_dict[other_element]--; 
            }
          } 
            
         foreach(var element in occ_dict.Keys) 
         { 
           if(occ_dict[element] > 0) 
               diff_words += occ_dict[element]; 
         }
         
         Console.WriteLine(diff_words); 
        } 
            
    }
}
