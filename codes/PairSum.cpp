#include<bits/stdc++.h>
#define pb push_back
#define f first
#define s second
#define ll long long int
using namespace std;

void solve(string &s)
{
    stack <char> st;
    string str;
    for(int i = 0 ; i < s.size() ; i++)
    {
        if(st.empty() || st.top() != s[i])
        {
            st.push(s[i]);
        }
        else
        {
            st.push('*');
            st.push(s[i]);
        }

    }
    while(!st.empty())
    {
        str.pb(st.top());
        st.pop();
    }
    reverse(str.begin(),str.end());
    cout << str;
}
int main() {
    int r;
    string s = "aabbcc";
    solve(s);
    return 0;
}
