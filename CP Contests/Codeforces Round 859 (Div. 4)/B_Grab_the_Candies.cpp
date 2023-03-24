#include<bits/stdc++.h>
#define int   long long
using namespace std;

int32_t main(){
    int t; cin >> t;
    while(t--){
        int n;cin >> n;
        vector<int>v(n);

        int Mihai = 0;
        int Bianca = 0;
        for(int i=0; i<n; i++){
            cin >> v[i];
            if(v[i]%2==0){
                Mihai+=v[i];
            }else{
                Bianca+=v[i];
            }
        } 
        if(Mihai>Bianca){
            cout << "YES" << endl;
        }else{
            cout << "NO" << endl;
        }
    }
}