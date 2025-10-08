#include <bits/stdc++.h>
using namespace std;

int main() {
    string str;
    cin >> str;

    map<char, int> mp;
    for (char ch : str) mp[ch]++;

    int oddCount = 0;
    

    // Count how many characters have odd frequency
    for (auto &it : mp) {
        if (it.second % 2 != 0) {
            oddCount++;
            

        }
    }

    // If more than one odd count, palindrome not possible
    if (oddCount > 1) {
        cout << "NO SOLUTION";
        return 0;
    }

    string firstHalf = "", secondHalf = "";
    char oddchar ;
    int oddcount = 0;
    for(auto it : mp){
        if(it.second%2==0){
            firstHalf.append(it.second/2,it.first);
            secondHalf.append(it.second/2,it.first);
        }else{
            oddchar = it.first;
            oddcount = it.second;
        }
        
    }

    reverse(secondHalf.begin(),secondHalf.end());
    firstHalf.append(oddcount,oddchar);
    firstHalf.append(secondHalf);
    cout<<firstHalf;
   
    return 0;
}
