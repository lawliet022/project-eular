#include<bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'
const int MOD = (int)1e9 + 7;
const double PI = acos(-1.0);

/*
Truncatable primes

The number 3797 has an interesting property. Being prime itself, it is possible to continuously remove digits from left to right, and remain prime at each stage: 3797, 797, 97, and 7. Similarly we can work from right to left: 3797, 379, 37, and 3.

Find the sum of the only eleven primes that are both truncatable from left to right and right to left.

NOTE: 2, 3, 5, and 7 are not considered to be truncatable primes.
*/

bool prime(string s) {
  int n = stoll(s);
  if (n < 2) return false;
  for (int i = 2; i * i <= n; i++) {
    if (n % i == 0) return false;
  }
  return true;
}

bool ok(string s) {
  for (int i = 0; i < (int)s.size(); i++) {
    if (!prime(s.substr(i))) return false;
  }
  for (int i = 0; i < (int)s.size(); i++) {
    if (!prime(s.substr(0, i + 1))) return false;
  }
  return true;
}

int solve(string s) {
  int ans = 0;
  if (s.size() >= 2) {
    if (ok(s)) {
      cout << s << endl;
      ans += stoll(s);
    }
  }
  for (char c = '0'; c <= '9'; c++) {
    if (prime(s + c))
      ans += solve(s + c);
  }
  return ans;
}

int32_t main(){
  int ans = 0;
  vector<int> start = {2, 3, 5, 7};
  for (auto x : start) {
    ans += solve(to_string(x));
  }

  cout << ans << endl;
  

  return 0;
}