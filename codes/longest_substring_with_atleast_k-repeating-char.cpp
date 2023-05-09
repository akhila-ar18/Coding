Leetcode : 395. Longest Substring with At Least K Repeating Characters.
https://leetcode.com/problems/longest-substring-with-at-least-k-repeating-characters/description/

Solution: 
class Solution {
public:
    int longestSubstring(string s, int k) {

        unordered_map <char,int> m;
        for(int i = 0; i < s.size(); i++){
            m[s[i]]++;
        }
        int len = 0;
        while(len < s.size() and m[s[len]] >= k)
            len++;
        if(len == s.size())
            return s.size();

        int left = longestSubstring(s.substr(0,len),k);
        int right = longestSubstring(s.substr(len+1),k);

        return max(left,right);
    }
};
