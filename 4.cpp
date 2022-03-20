#include<bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'
const int MOD = (int)1e9 + 7;
const double PI = acos(-1.0);

/*
Largest palindrome product

A palindromic number reads the same both ways. The largest palindrome made from the product of two 2-digit numbers is 9009 = 91 × 99.

Find the largest palindrome made from the product of two 3-digit numbers.
*/


int32_t main(){
  int ans = 0;
  for (int i = 100; i <= 999; i++) {
    for (int j = 100; j <= 999; j++) {
      string s = to_string(i * j);
      string rev = s;
      reverse(rev.begin(), rev.end());
      if (s == rev) ans = max(ans, i * j);
    }
  }

  cout << ans << endl;

  return 0;
}