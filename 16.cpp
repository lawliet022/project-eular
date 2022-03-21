#include<bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'
const int MOD = (int)1e9 + 7;
const double PI = acos(-1.0);

/*
Power digit sum

215 = 32768 and the sum of its digits is 3 + 2 + 7 + 6 + 8 = 26.

What is the sum of the digits of the number 21000?
*/

string mult(string a, int n) {
  string ans = "";
  int carry = 0;
  for (int i = (int)a.size() - 1; i >= 0; i--) {
    int cur = (a[i] - '0') * 2 + carry;
    ans += char(cur % 10 + '0');
    carry = cur / 10;
  }
  if (carry) ans += char(carry + '0');
  reverse(ans.begin(), ans.end());
  return ans;
}

int32_t main(){
  int n = 1000;
  string res = "1";
  for (int i = 1; i <= n; i++) {
    res = mult(res, 2);
  }

  int ans = 0;
  for (auto x : res) {
    ans += (x - '0');
  }
  cout << ans << endl;

  return 0;
}