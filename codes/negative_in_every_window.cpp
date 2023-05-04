/* Problem statement : Given an array and a positive integer k, find the first negative integer for each and every window(contiguous subarray) of size k.

Example:
Input:
n=5
-8 2 3 -6 10
k=2
o/p:  -8 0 -6 -6

n=8
12 -1 -7 8 -15 30 16 28
k=3 //window size
Output:
-1 -1 -7 -15 -15 0    */

-----------------------------------------------------------------------------------------------------------------------------------------------------------------------
#include <bits/stdc++.h>
using namespace std;

vector<int> solve(int a[],int n,int k)
{
    vector <int> v;
    deque <int> dq;
    int i = 0, j = 0;
    while(j < n)
    {
        if(a[j] < 0)
            dq.push_back(a[j]);
        if(j-i+1 < k)
            j++;
        else if(j-i+1 == k)
        {
            if(dq.size() == 0)
                v.push_back(0);
            else
            {
                v.push_back(dq.front());
                if(a[i] < 0)
                    dq.pop_front();
            }
            i++;
            j++;
        }
    }
    return v;
}

int main() {
    int a[] = {12 ,-1 ,-7 ,8 ,-15 ,30 ,16 ,28};
    int n = sizeof(a)/sizeof(a[0]);
    vector<int> ans = solve(a,n,3);
    for(auto &i:ans)
      cout << i <<" ";
    return 0;
}
