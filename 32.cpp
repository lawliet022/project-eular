#include<bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'
const int MOD = (int)1e9 + 7;
const double PI = acos(-1.0);

/*
Pandigital products

We shall say that an n-digit number is pandigital if it makes use of all the digits 1 to n exactly once; for example, the 5-digit number, 15234, is 1 through 5 pandigital.

The product 7254 is unusual, as the identity, 39 × 186 = 7254, containing multiplicand, multiplier, and product is 1 through 9 pandigital.

Find the sum of all products whose multiplicand/multiplier/product identity can be written as a 1 through 9 pandigital.

HINT: Some products can be obtained in more than one way so be sure to only include it once in your sum.
*/

bool pandigital(int a, int b, int c) {
  string s = to_string(a) + to_string(b) + to_string(c);
  if (s.size() != 9) return false;
  sort(s.begin(), s.end());
  for (int i = 0; i < 9; i++) {
    if (i + 1 != (s[i] - '0')) return false;
  }
  return true;
}

bool possible(int n) {
  for (int i = 1; i * i <= n; i++) {
    if (n % i == 0) {
      if (pandigital(i, n / i, n)) {
        return true;
      }
    }
  }
  return false;
}

int32_t main(){
  int l = 1000, r = 100000;
  int ans = 0;
  for (int i = l; i <= r; i++) {
    if (possible(i)) {
      ans += i;
    }
  }

  cout << ans << endl;

  return 0;
}