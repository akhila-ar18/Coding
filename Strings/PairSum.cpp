
/* Problem Statement: Given a string with repeated characters, we have to insert "*" between the pair of identical characters

Examples: 
1.  Input: xxxy
    Output : x*x*xy
2.  Input: error
    Output : er*ror
3.  Input: techtricks
    Output : techtricks
    
Solution:
> I have made use of STACK DATA STRUCTURE
> This problem can also be solved using RECURSION 
> Time Complexity : O(n) 
> Space Complexity: O(n)   */

------------------------------------------------------------------------------------------------------------------------------------------------------------------------------

#include <bits/stdc++.h>
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
        if(st.empty() || st.top() != s[i])   /* Check if stack is empty or if the char on top of stack is not same as that of the incoming char then just push the
        {                                       incoming char onto the top of stack */
            st.push(s[i]);
        }
        else                                /* Else if the char on the top of stack is same as that of the incoming char then push '*' first & then the incoming char
        {                                      onto the top of stack */
            st.push('*');
            st.push(s[i]);
        }

    }
    while(!st.empty())                     // Traverse the stack util it is empty
    {
        str.pb(st.top());                  // Push the top char of the stack onto the string 'str' till the stack becomes empty
        st.pop();
    }
    
    // str = c*cb*ba*a                     // Result of the string 'str' after traversing the stack                         
    
    reverse(str.begin(),str.end());        // Reverse the string to get the desired result
    cout << str;
}

int main() {
    int r;
    string s = "aabbcc";
    solve(s);
    return 0;
}
