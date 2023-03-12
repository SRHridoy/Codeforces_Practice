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
    int n,count=0;
    cin>>n;
    string s;
    set<string> m;
    m.insert("VODKA");
    m.insert("WHISKEY");
    m.insert("WINE");
    m.insert("TEQUILA");
    m.insert("SAKE");
    m.insert("RUM");
    m.insert("GIN");
    m.insert("CHAMPAGNE");
    m.insert("BEER");
    m.insert("BRANDY");
    m.insert("ABSINTH");
    for(int i=0;i<n;i++)
    {
        cin>>s;
        if(m.find(s) != m.end())
        {
            count++;
        }
        else if(!isalpha(s[0]))
        {
            if(stoi(s) < 18)
            {
                count++;
            }
        }
    }
    cout<<count;
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