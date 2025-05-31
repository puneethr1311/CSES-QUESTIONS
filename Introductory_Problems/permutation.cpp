/*
if you start to think to find permuation of these number which comes in time complexity of O(n!) that was pretty high , and then
check permutation which one have no two adjacent element have difference of 1 . so it show , time limit exceed. so we have to think 
with different approach , that what we have to focus on what we need  i.e. no two adjacent element have difference of 1 . 
it can comes with some easy way , means with time complexity of O(n) : 
just appart odd and even number and think we get the answer . 
i.e. if n = 5 : possible permutation is : (1 3 5)odd number  (2 4 )even number  : 1 3 5 2 4 
it have some edge case also . like for n = 2 or n = 3 , it doesnt have any kind of permutation in which they can fit according to
question.
*/



#include<iostream>
using namespace std ; 
                 
int main(){ 
    int n ;
    cin>>n;
    if(n==1){
        cout<<n;
    }else if(n==2 || n==3){
        cout<<"NO SOLUTION";
    }else if(n==4){
        cout<<"3 1 4 2";
    }else{
        for(int i =1;i<=n;i++){
            if(i%2==1) cout<<i<<" ";
        }
        for(int i =1;i<=n;i++){
            if(i%2==0) cout<<i<<" ";
        }
    }
    
    return 0 ;
}