#include<bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'
const int MOD = (int)1e9 + 7;
const double PI = acos(-1.0);


/*
Double-base palindromes

The decimal number, 585 = 10010010012 (binary), is palindromic in both bases.

Find the sum of all numbers, less than one million, which are palindromic in base 10 and base 2.

(Please note that the palindromic number, in either base, may not include leading zeros.)
*/

const int N = 1e6;

bool pal10(int n) {
  int m = n, cur = 0;
  while (n) {
    cur = cur * 10 + n % 10;
    n /= 10;
  }
  return m == cur;
}

bool pal2(int n) {
  string s = "";
  while (n) {
    if (n % 2) s += '1';
    else s += '0';
    n >>= 1;
  }
  string t = s;
  reverse(t.begin(), t.end());
  return t == s;
}

int32_t main(){
  int ans = 0;
  for (int i = 1; i < N; i++) {
    if (pal10(i) && pal2(i)) {
      ans += i;
    }
  }

  cout << ans << endl;

  return 0;
}