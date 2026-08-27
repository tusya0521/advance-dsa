#include <bits/stdc++.h>

using namespace std;

    bool palindromecheck(string s, int i, int n){
        if(i == n/2) return true;
        if(s[i] != s[n-i-1]) return false;
        return (true && palindromecheck(s, i+1, n));
    }

int main() {
    string s = "racecar";
    int n = s.length();
    bool ans = palindromecheck(s, 0, n);
    if(ans) cout<<"true" ;
    else cout<<"false";
    return 0;
}