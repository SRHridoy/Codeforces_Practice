#include<bits/stdc++.h>
#define int   long long
using namespace std;

int32_t main(){
    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        if(n%2==1){
            cout << -1 << endl;
        }else{
            cout << 1 << " " << n/2 << endl;
        }
    }
}