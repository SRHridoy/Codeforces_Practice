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

void removeSpaces(string &s){
    int n = s.find(' ');
    if(n>=0){
        s.erase(n,1);
        removeSpaces(s);
    }
}

void solve(){
    string s;
    getline(cin , s);
    transform(all(s),s.begin(),::tolower);
    //cout << s << endl;
    char v[6] = {'a','e','i','o','u','y'};
    removeSpaces(s);
    fo(i,6){
        if(s[s.size()-2]==v[i]){
            cout << "YES" << endl;
            break;
        }else if (i==5){
            cout << "NO" << endl;
        }
    }
    return;
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