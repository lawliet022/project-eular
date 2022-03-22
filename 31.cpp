#include<bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'
const int MOD = (int)1e9 + 7;
const double PI = acos(-1.0);

/*
Coin sums

In the United Kingdom the currency is made up of pound (£) and pence (p). There are eight coins in general circulation:

1p, 2p, 5p, 10p, 20p, 50p, £1 (100p), and £2 (200p).
It is possible to make £2 in the following way:

1×£1 + 1×50p + 2×20p + 1×5p + 1×2p + 3×1p
How many different ways can £2 be made using any number of coins?
*/


// {1, 2, 1}
// {1, 1, 2} are same

int32_t main(){
  int n = 200;
  vector<int> dp(n + 1, 0);
  vector<int> den = {1, 2, 5, 10, 20, 50, 100, 200};

  dp[0] = 1;  
  for (auto x : den) {
    for (int i = 1; i <= n; i++) {
      if (i - x >= 0) {
        dp[i] += dp[i - x];
      }
    }
  }
  cout << dp[n] << endl;

  return 0;
}