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

int longestSubstrDistinctChars(string s)
{
    if (s.length() == 0)
        return 0;
    int n = s.length();
    set<char> st;
    int len = 1;
    st.insert(s[0]);
    int i = 1;
    int maxLen = 0;
    while (i < n)
    {
        if (s[i] != s[i - 1] && st.find(s[i]) == st.end())
        {
            st.insert(s[i]);
            len++;
            i++;
            if (len > maxLen)
            {
                maxLen = len;
            }
        }
        else
        {
            if (len == 1)
            {
                i++;
            }
            else
            {
                st.clear();
                i = i - len + 1;
                len = 0;
            }
        }
    }
    return max(maxLen, len);
}
// Program to count the number of
// unique characters in a string
int cntDistinct(string str)
{
    // Set to store unique characters
    // in the given string
    unordered_set<char> s;

    // Loop to traverse the string
    for (int i = 0; i < str.size(); i++) {

        // Insert current character
        // into the set
        s.insert(str[i]);
    }

    // Return Answer
    return s.size();
}

void solve(){
    int n; cin >> n;
    string s; cin >> s;
    string s1, s2;
    int ans = longestSubstrDistinctChars(s);
    //cout << ans << endl;
    fo(i,ans){
        s1.push_back(s[i]);
    }

    Fo(i,ans,n){
        s2.push_back(s[i]);
    }
    //cout << s1 << " " << s2 <<endl;
    int ans1 = cntDistinct(s1);
    int ans2 = cntDistinct(s2);
    cout << ans1+ans2 << endl;
}

int32_t main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int t;
    //t = 1;
    //int cs = 1;
    cin >> t;
    while (t--){
        //cout << "Case-#" << cs <<": ";
        solve();
        //cs++;
    }
}