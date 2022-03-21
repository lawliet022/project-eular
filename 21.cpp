#include<bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'
const int MOD = (int)1e9 + 7;
const double PI = acos(-1.0);

/*
Amicable numbers

Let d(n) be defined as the sum of proper divisors of n (numbers less than n which divide evenly into n).
If d(a) = b and d(b) = a, where a ≠ b, then a and b are an amicable pair and each of a and b are called amicable numbers.

For example, the proper divisors of 220 are 1, 2, 4, 5, 10, 11, 20, 22, 44, 55 and 110; therefore d(220) = 284. The proper divisors of 284 are 1, 2, 4, 71 and 142; so d(284) = 220.

Evaluate the sum of all the amicable numbers under 10000.
*/


int32_t main(){
  int n = 10000;
  vector<int> v(n + 1);
  for (int i = 1; i <= n; i++) {
   for (int j = 2 * i; j <= n; j += i) {
     v[j] += i;
   }
  }

  int ans = 0;
  for (int i = 1; i <= n; i++) {
    if (v[i] > n || v[i] == i) continue;
    if (v[v[i]] == i) ans += i;
  }

  cout << ans << endl;
  

  return 0;
}