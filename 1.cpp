#include<bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'
const int MOD = (int)1e9 + 7;
const double PI = acos(-1.0);

/*
Multiples of 3 or 5

If we list all the natural numbers below 10 that are multiples of 3 or 5, we get 3, 5, 6 and 9. 
The sum of these multiples is 23.

Find the sum of all the multiples of 3 or 5 below 1000.

*/

int32_t main(){
  int n = 1000;
  int ans = 0;
  for (int i = 1; i < n; i++) {
    if (i % 3 == 0 || i % 5 == 0) ans += i;
  }
  cout << ans << endl;

  return 0;
}