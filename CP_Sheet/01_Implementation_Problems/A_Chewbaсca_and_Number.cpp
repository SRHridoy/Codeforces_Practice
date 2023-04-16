//https://codeforces.com/contest/514/problem/A

#include<bits/stdc++.h>
using namespace std;
#define int long long

int32_t main(){

    int x; cin >> x;

    int digits=log10(x)+1;
    //Digits er ei sutro only 999999999999998 pojonto accurate ....but er besi hole ek kore besi dekhai so ... carefull
    if(x==999999999999999999){
        cout << 900000000000000000;
        return 0;
    }

    vector<int>v(digits);
    while(x>0){
        int rem = 0;
        rem = x%10;
        x/=10;
        if(rem>4)
            rem=9-rem;

        v.push_back(rem);
    }
    reverse(v.begin(),v.end());
    for(int i = 0; i<digits; i++){
        if(v[0]==0)
            v[0]=9;
        cout <<v[i];
    }
}