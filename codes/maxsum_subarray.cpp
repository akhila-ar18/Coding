/* Problem statement : Given an array of integers Arr of size N and a number K. Return the maximum sum of a subarray of size K.

Example:
Input:
N = 4, K = 2
Arr = [100, 200, 300, 400]
Output:
700
Explanation:
Arr3  + Arr4 =700 which is maximum.   */
-----------------------------------------------------------------------------------------------------------------------------------------------------------------------
#include <bits/stdc++.h>
using namespace std;

int solve(int a[],int n,int k)
{
    int i = 0, j = 0,sum = 0,res = 0;
    while(j < n)
    {
        sum += a[i];
        if(j-i+1 < k)
            j++;
        else if(j-i+1 == k)
        {
            res = max(res,sum);
            i++;
            j++;
        }
    }
    return res;
}

int main() {
    int a[] = {100,200,300,400};
    int n = sizeof(a)/sizeof(a[0]);
    cout << solve(a,n,2);
    return 0;
}
