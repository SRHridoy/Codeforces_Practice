//https://codeforces.com/problemset/problem/282/A

#include<bits/stdc++.h>
using namespace std;

int32_t main(){
    int n;
    cin >> n;
    int ans = 0;
    while(n--){
        string x;
        cin >> x;
        if(x=="X++" or x == "++X")
            ans++;
        else
            ans--;
    }
    
    cout << ans << endl;
}