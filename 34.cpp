#include<bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'
const int MOD = (int)1e9 + 7;
const double PI = acos(-1.0);

/*
Digit factorials

145 is a curious number, as 1! + 4! + 5! = 1 + 24 + 120 = 145.

Find the sum of all numbers which are equal to the sum of the factorial of their digits.

Note: As 1! = 1 and 2! = 2 are not sums they are not included.
*/

int fac[10];

bool possible(int n) {
  int t = n, cur = 0;
  while (n) {
    cur += fac[n % 10];
    n /= 10;
  }
  return t == cur;
}

int32_t main(){
  
  fac[0] = 1;
  for (int i = 1; i < 10; i++) fac[i] = fac[i - 1] * i;

  int ans = 0;
  for (int i = 10; i < 1e7; i++) {
    if (possible(i)) {
      ans += i;
    }
  }
  cout << ans << endl;

  return 0;
}