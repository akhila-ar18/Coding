/*  Problem Statement : Given a cost of 'n' items and a sum. We need to find out the cost of maximum items that we can purchase with the given sum. 

    Examples: 
    1. Input: cost[] = {1,12,5,111,200}
              sum = 10
       Output: 2
       
    2. Input: cost[] = {20,10,5,30,100}
              sum = 35
       Output: 3
       
*/
-----------------------------------------------------------------------------------------------------------------------------------------------------------------------
// Naive solution
// Time complexity : O(n log n)
  
#include <bits/stdc++.h>
using namespace std;

int maxItems(int a[],int n,int sum)
{
   int maxitems = 0;
   sort(a,a+n);                             
   for(int i = 0 ;  i < n ; i++)
   {
      if(a[i] <= sum)
      {
         maxitems++;
         sum = sum - a[i];
      }
   }
   return maxitems;
}
int main()
{
   int cost[] = {1,12,5,111,200};
   int sum = 10;
   int n = sizeof(cost)/sizeof(cost[0]);
   cout << maxItems(cost,n,sum);
   return 0;
}
-----------------------------------------------------------------------------------------------------------------------------------------------------------------------
  
// Using heap
// Time complexity : O(n)
  
int maxItems(int a[],int n,int sum)
{
   int maxitems = 0;
   priority_queue <int> pq;                       // construct a min heap
   for(int i = 0 ; i < n ; i++)
   {
      pq.push(a[i]);
      if(pq.top() <= sum)
      {
         pq.pop();
         sum = sum - a[i];
         maxitems++;
      }
   }
   return maxitems;
}
int main()
{
   int cost[] = {1,12,5,111,200};
   int sum = 10;
   int n = sizeof(cost)/sizeof(cost[0]);
   cout << maxItems(cost,n,sum);
   return 0;
}
