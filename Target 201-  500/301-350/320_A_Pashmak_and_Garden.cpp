//       *Author: Md Sohanur Rahman Hridoy* ​

//In the name of ALLAH, the Most Gracious, the Most Merciful...

#pragma GCC optimize("Ofast")
#pragma GCC optimize("O3,unroll-loops")

#include"bits/stdc++.h"
#define int               long long
#define pb                push_back
#define ppb               pop_back
#define pf                push_front
#define ppf               pop_front
#define endl              '\n'
#define all(v)            v.begin(),v.end()
#define fo(i, n)          for(int i = 0; i < n; i++)
#define Fo(i,k,n)         for(int i = k;k<n?i<n:i>n;k<n?i++:i--)
using namespace std;

void solve(){
    int x1, y1, x2, y2; cin >> x1 >> y1 >> x2 >> y2;
    if(x1==x2){
        cout << (x1+y2-y1) << " " << y1 << " " <<(x2+y2-y1) << " " << y2 << endl;
    }else if(y1==y2){
        cout << x1 << " " << (y1+x2-x1) << " " << x2 << " " << (y2+x2-x1) << endl;
    }else if(abs(x1-x2)==abs(y1-y2)){
        cout << x1 << " " << y2 << " " << x2 << " " << y1 << endl;
    }else{
        cout << -1 << endl;
    }
}

int32_t main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int t;
    t = 1;
    //int cs = 1;
    //cin >> t;
    while (t--){
        //cout << "Case-#" << cs <<": ";
        solve();
        //cs++;
    }
}