#include<bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'
const int MOD = (int)1e9 + 7;
const double PI = acos(-1.0);

/*
Non-abundant sums

A perfect number is a number for which the sum of its proper divisors is exactly equal to the number. For example, the sum of the proper divisors of 28 would be 1 + 2 + 4 + 7 + 14 = 28, which means that 28 is a perfect number.

A number n is called deficient if the sum of its proper divisors is less than n and it is called abundant if this sum exceeds n.

As 12 is the smallest abundant number, 1 + 2 + 3 + 4 + 6 = 16, the smallest number that can be written as the sum of two abundant numbers is 24. By mathematical analysis, it can be shown that all integers greater than 28123 can be written as the sum of two abundant numbers. However, this upper limit cannot be reduced any further by analysis even though it is known that the greatest number that cannot be expressed as the sum of two abundant numbers is less than this limit.

Find the sum of all the positive integers which cannot be written as the sum of two abundant numbers.
*/

int32_t main(){
  int n = 28123;
  vector<int> v(n + 1, 0);
  for (int i = 1; i <= n; i++) {
    for (int j = 2 * i; j <= n; j += i) {
      v[j] += i;
    }
  }
  set<int> s;
  for (int i = 1; i <= n; i++) {
    if (v[i] > i) s.insert(i);
  }

  int ans = 0;
  for (int i = 1; i <= n; i++) {
    bool ok = 1;
    for (auto x : s) {
      if (s.count(i - x)) {
        ok = 0;
        break;
      }
    }
    if (ok) ans += i;
  }

  cout << ans << endl;

  return 0;
}