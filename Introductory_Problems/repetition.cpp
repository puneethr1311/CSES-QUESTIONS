/* 
problem : Repetition

Time limit: 1.00 s
Memory limit: 512 MB



You are given a DNA sequence: a string consisting of characters A, C, G, and T. Your task is to find the longest repetition in the sequence. This is a maximum-length substring containing only one type of character.
Input
The only input line contains a string of n characters.
Output
Print one integer: the length of the longest repetition.
Constraints

1 <= n <= 10^6

Example
Input:
ATTCGGGA

Output:
3
    
    

*/



#include<iostream>
#include<string>
#include<vector>
using namespace std ; 
                 
int main(){ 
    string s ;
    cin>>s;
    
    int n = s.size();
    int count = 0;
    int init = 0;
    char ch = s[0];
    for(int i = 0;i<n;i++){
       if(ch !=s[i]){
          init = 1;
          ch = s[i];
       }else{
            init++;
       }
       count = max(count,init);
    }
    cout<<count;
    return 0 ;
}