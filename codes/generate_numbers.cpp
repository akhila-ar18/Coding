/*  Problem Statement : Given a number 'n'. Print first 'n' numbers in increasing order such that all these numbers have digits in set {5,6}.

    Examples: 
    1. Input: n = 10
       Output: 5 6 55 56 65 66 555 556 565 566
       
    2. Input: n = 4
       Output: 5 6 55 56
       
*/
-----------------------------------------------------------------------------------------------------------------------------------------------------------------------

  #include <bits/stdc++.h>
  using namespace std;

  void solve(int n)
  {
     queue <string> q;
     q.push("5");
     q.push("6");
     for(int i = 0 ; i < n ; i++)
     {
        string cur = q.front();
        cout << cur << " ";
        q.pop();
        q.push(cur + "5");
        q.push(cur + "6");
     }
  }
  int main()
  {
     int n = 5;
     solve(n);
     return 0;
  }

