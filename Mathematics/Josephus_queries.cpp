#include <iostream>
#include <list>
using namespace std;

long long solve(long long n, long long k) {
    
    if(n==1) return 1;

    if(k<=(n+1)/2){
        if(2*k >n) return 2*k%n;
        return 2*k;
    }

    int c = solve(n>>1,k-(n+1)/2);
    if(n&1) return 2*c+1;
    else return 2*c-1;
}

int main() {
    int q;
    cin >> q;
    while (q--) {
        long long n, k;
        cin >> n >> k;
        cout << solve(n, k) << '\n';
    }
    return 0;
}
