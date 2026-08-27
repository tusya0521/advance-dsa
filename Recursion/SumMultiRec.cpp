#include <bits/stdc++.h>

using namespace std;

 int sumrec(int n){
    if(n == 1) return 1;
    return n + sumrec(n-1);
 }

 int mulrec(int n){
    if(n == 1) return 1;
    return n * mulrec(n-1);
 }

int main() {
    int sum = sumrec(5000);
    long long int mul = mulrec(10);
    cout<<sum<<" "<<mul;
    return 0;
}