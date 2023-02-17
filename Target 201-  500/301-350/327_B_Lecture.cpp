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
    map<string,string>m;
    int v,n;
    cin>>n>>v;
    while(v--)
    {
        string s1,s2;
        cin>>s1>>s2;
        if(s1.size()==s2.size())
        m[s1]=s1;
        else
        {
            if(s1.size()>s2.size())
            m[s1]=s2;
            else
            m[s1]=s1;
        }
    }
    while(n--)
    {
        string s;
        cin>>s;
        cout<<m[s]<<" ";
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