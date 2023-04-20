/* Problem Statement: Given an array of characters chars, compress it using the following algorithm:
                      * Begin with an empty string s. For each group of consecutive repeating characters in chars:
                      * If the group's length is 1, append the character to s.
                      * Otherwise, append the character followed by the group's length.
                      * After you are done modifying the input array, return the new length of the array.
Examples: 
1.  Input: chars = ["a","a","b","b","c","c","c"]
    Output : 6 [Explaination : a2b2c3 --> length of string = 6]
2.  Input: chars = ["a"]
    Output : 1 [Explaination : a --> length of string = 1]
3.  Input: chars = ["a","b","b","b","b","b","b","b","b","b","b","b","b"]
    Output : [Explaination : a2b2c3 --> length of string = 6]
    
Solution :
> Time Complexity : O(n) 
> Space Complexity: O(n)   */

-------------------------------------------------------------------------------------------------------------------------------------------------------------------------
#include <bits/stdc++.h>
using namespace std;

int solve(string &chars)
{
    int n = chars.size();
    int cnt = 0;
    string ans = "";
    unordered_map <char,int> mp;
  
    for(int i = 0; i < n; i++)
        mp[chars[i]]++;
        
    for(int i = 0; i < mp.size(); i++)
    {
        if(mp[chars[i]] == 1)
            ans.push_back(chars[i]);
        else if(mp[chars[i]] > 1)
        {
            ans.push_back(chars[i]);
            ans.push_back(mp[chars[i]]);
        }
    }
        return ans.size();
}

int main() {
  
    string s ="aabbbccc";
    cout << solve(s);
    return 0;
}
