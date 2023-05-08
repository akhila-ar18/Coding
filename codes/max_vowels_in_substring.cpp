Leetcode : https://leetcode.com/problems/maximum-number-of-vowels-in-a-substring-of-given-length/

--------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
#include<bits/stdc++.h>
using namespace std;

bool isVowel(char c)
{
    if(c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u')
        return 1;
    return 0;
}

int maxVowels(string s,int k)
{
    int i = 0, j = 0, vowelCount = 0;
    int maxlen = INT_MIN;
    
    while(j < s.length())
    {
        if(isVowel(s[j]))
            vowelCount++;
            
        if(j - i == k)
        {
            if(isVowel(s[i]))
                vowelCount--;
            i++;
        }
        maxlen = max(maxlen,vowelCount);
        j++;
    }
    return maxlen;
}

int main()
{
    string s = "aeiou";
    int k = 2;
    cout << maxVowels(s,k);
    return 0;
}
