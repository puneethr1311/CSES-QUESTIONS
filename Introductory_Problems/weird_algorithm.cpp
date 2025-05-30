#include<iostream>
#include<vector>
using namespace std;
 
int main(){
    long long n ;
    
    // Using 'long long' for 'n' because although 1 <= n <= 10^6 is within the 'int' range,
    // during computation (especially for odd 'n'), the operation n * 3 + 1 can exceed the 'int' limit.
    // To prevent overflow, we use 'long long' to safely store intermediate values.

    cin>>n;
    cout<<n<<" ";
    while(n!=1){
        if(n%2==0){
            n=n/2;
            cout<<n<<" ";
        }else{
            n=n*3 +1;
            cout<<n<<" ";
        }
    }
    return 0;
}
