#include<bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'
const int MOD = (int)1e9 + 7;
const double PI = acos(-1.0);

/*
Integer right triangles

If p is the perimeter of a right angle triangle with integral length sides, {a,b,c}, there are exactly three solutions for p = 120.

{20,48,52}, {24,45,51}, {30,40,50}

For which value of p ≤ 1000, is the number of solutions maximised?
*/

int32_t main(){
  map<int,int> m;
  for (int i = 1; i < 1000; i++) {    // hypot
    for (int j = 1; j < i; j++) {     
      if (i + j >= 1000) continue;
      int sq = i * i - j * j;
      if (sq <= 0) continue;
      int p = sqrt(sq);
      if (p * p == sq && i + j + p <= 1000) {
        m[i + j + p]++;
      }
    }
  }
  int maxi = 0, ans = 0;
  for (auto x : m) {
    if (x.second > maxi) {
      ans = x.first;
      maxi = x.second;
    }
  }

  cout << ans << endl;

  return 0;
}