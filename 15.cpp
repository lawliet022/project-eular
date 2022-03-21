#include<bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'
const int MOD = (int)1e9 + 7;
const double PI = acos(-1.0);

/*
Lattice paths

Starting in the top left corner of a 2×2 grid, and only being able to move to the right and down, there are exactly 6 routes to the bottom right corner.


How many such routes are there through a 20×20 grid?
*/

int32_t main(){
  vector<vector<int>> dp(21, vector<int>(21, 0));
  dp[0][0] = 1;
  int n = 21;
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n; j++) {
      dp[i][j] += (i ? dp[i - 1][j] : 0LL) + (j ? dp[i][j - 1] : 0LL);
    }
  }
  cout << dp[n - 1][n - 1] << endl;

  return 0;
}