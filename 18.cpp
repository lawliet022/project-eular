#include<bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'
const int MOD = (int)1e9 + 7;
const double PI = acos(-1.0);

/*
Maximum path sum I
Submit

 Show HTML problem content 
Problem 18
By starting at the top of the triangle below and moving to adjacent numbers on the row below, the maximum total from top to bottom is 23.

3
7 4
2 4 6
8 5 9 3

That is, 3 + 7 + 4 + 9 = 23.

Find the maximum total from top to bottom of the triangle below:

75
95 64
17 47 82
18 35 87 10
20 04 82 47 65
19 01 23 75 03 34
88 02 77 73 07 63 67
99 65 04 28 06 16 70 92
41 41 26 56 83 40 80 70 33
41 48 72 33 47 32 37 16 94 29
53 71 44 65 25 43 91 52 97 51 14
70 11 33 28 77 73 17 78 39 68 17 57
91 71 52 38 17 14 91 43 58 50 27 29 48
63 66 04 68 89 53 67 30 73 16 69 87 40 31
04 62 98 27 23 09 70 98 73 93 38 53 60 04 23

*/

int32_t main(){
  int n = 15;
  int a[n][n];
  for (int i = 0; i < n; i++) {
    for (int j = 0; j <= i; j++) {
      cin >> a[i][j];
    }
  }
  vector<vector<int>> dp(n, vector<int>(n, 0));
  dp[0][0] = a[0][0];
  
  for (int i = 1; i < n; i++) {
    for (int j = 0; j <= i; j++) {
      int x = (j ? dp[i - 1][j - 1] : 0);
      int y = (j != i ? dp[i - 1][j] : 0);
      dp[i][j] = max(x, y) + a[i][j];
    }
  }

  cout << *max_element(dp[n - 1].begin(), dp[n - 1].end()) << endl;

  return 0;
}