#include <bits/stdc++.h>

using namespace std;

    void doublered(int n){
        if(n == 0) return;
        cout<<" "<<n;
        doublered(n-1);
        cout<<endl;
        doublered(n-1);
    }

int main() {
    doublered(15);
    return 0;
}