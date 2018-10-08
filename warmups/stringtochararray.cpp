// day 6 of 30 doc
// https://www.hackerrank.com/challenges/30-review-loop/problem?h_r=next-challenge&h_v=zen

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <string>
#include <cstring>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int T;
    cin >> T;
    
    for(int i = 0; i < T; i++){
        string inputString;        
        getline(cin >> ws, inputString);
        //cout << "the string is: " << inputString << endl;        

        int n = inputString.length();  
        // declaring character array 
        char char_array[n+1];  

        // copying the contents of the  
        // string to char array 
        strcpy(char_array, inputString.c_str()); 
        
        //rearrange the char array into 
        // the two lists        
        for(int eveni =0; eveni<n; eveni=eveni+2){
            cout << char_array[eveni];
        }
        
        // print the space
        cout << " ";
        
        // print the odd letters
        for(int oddi =1; oddi<n; oddi=oddi+2){
            cout << char_array[oddi];
        }
        
        // get to new line
        cout << endl;
        
    }
    
    return 0;
}
