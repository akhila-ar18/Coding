
/* Problem Statement: Printing array elements using recursion. */

--------------------------------------------------------------------------------------------------------------------------------------------------------------------------

#include <bits/stdc++.h>
using namespace std;

void printArrayEle(int a[],int n)
{
    static int i = 0;
    if(i==n) return;
    else
    {
        cout << a[i] << " ";
        i++;
        printArrayEle(a,n);
    }
}

int main() {
    int arr[] = {1,2,3,4,5,6,7,8,9,10};
    int n = sizeof(arr) / sizeof(arr[0]);
    printArrayEle(arr,n);
    return 0;
}

--------------------------------------------------------------------------------------------------------------------------------------------------------------------------
