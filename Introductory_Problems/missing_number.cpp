
/* 
problem :
           Time limit: 1.00 s Memory limit: 512 MB   

You are given all numbers between 1,2,....,n except one. Your task is to find the missing number.

Input
The first input line contains an integer n.
The second line contains n-1 numbers. Each number is distinct and between 1 and n (inclusive).

Output
Print the missing number.

Constraints

2 <= n <= 2.10^5

Example
Input:
5
2 3 1 5

Output:
4
*/


#include<iostream>
using namespace std ; 
                 
int main(){ 
    int n;
    cin>>n;
    int xoro = 0;
    int i = 1;
    while(i<n+1){
        xoro = xoro^i;
        i++;
    }
    i=1;
    while(i<n){
        int val;
        cin>>val;
        xoro = xoro^val;
        i++;
    }
    cout<<xoro;
 
    return 0 ;
}