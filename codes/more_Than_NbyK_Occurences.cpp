/*  Problem Statement : Given an array of size 'n' with repeated elements and the value 'k'. Our task is to print the elements which has more than n/k occurences.
    Examples: 
    1. Input: a[] = {30,10,20,20,10,20,30,30}
              k = 4
       Output: 20 30
       
    2. Input: a[] = {30,10,20,30,30,40,30,40,30}
              k = 2
       Output: 30 
*/
-----------------------------------------------------------------------------------------------------------------------------------------------------------------------

// Naive solution :
// Time complexity: O(n log n)

#include <bits/stdc++.h>
using namespace std;

void moreThanNbyKOccur(int a[],int n,int k)
{
    sort(a, a+n);
    int i = 1,count = 1;
    while(i < n)
    {
        while(i < n && a[i]==a[i-1])
        {
            count++;
            i++;
        }
      if(count > n/k)
        cout << a[i-1] << " ";
      count = 1;
      i++;
    }
}

int main()
{
    int a[] = {10,10,20,30,20,10,10};
    int n = sizeof(a)/sizeof(a[0]);
    int k = 2;
    moreThanNbyKOccur(a,n,k);
    return 0;
}

----------------------------------------------------------------------------------------------------------------------------------------------------------------------
