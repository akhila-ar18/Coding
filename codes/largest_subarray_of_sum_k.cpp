/* Problem statement : Given an array containing N positive integers and an integer K. Your task is to find the length of the longest Sub-Array with sum of the elements
equal to the given value K.

For Input:
n=7,k(sum)= 5
a[] = {4, 1, 1, 1, 2, 3, 5}
your output is: 
4	//(1,1,1,2)   

*/
-------------------------------------------------------------------------------------------------------------------------------------------------------------------------
#include <bits/stdc++.h>
using namespace std;

int solve(int a[],int n,int k)
{
    int i = 0, j = 0, res = 0, sum = 0;
    while(j < n)
    {
        sum += a[j];
        if(sum < k)
            j++;
        else if(sum == k)
        {
            res = max(res,j-i+1);
            j++;
        }
        else if(sum > k)
        {
            sum -= a[i];
            i++;
            j++;
        }
    }
    return res;
}

int main() {
    int a[] = {4 ,1 ,1 ,1 ,2 ,3, 5};
    int n = sizeof(a)/sizeof(a[0]);
    int sum = 5;
    cout << solve(a,n,sum);
    return 0;
}
