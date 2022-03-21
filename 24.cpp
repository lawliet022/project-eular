#include<bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'
const int MOD = (int)1e9 + 7;
const double PI = acos(-1.0);

/*
Lexicographic permutations

A permutation is an ordered arrangement of objects. For example, 3124 is one possible permutation of the digits 1, 2, 3 and 4. If all of the permutations are listed numerically or alphabetically, we call it lexicographic order. The lexicographic permutations of 0, 1 and 2 are:

012   021   102   120   201   210

What is the millionth lexicographic permutation of the digits 0, 1, 2, 3, 4, 5, 6, 7, 8 and 9?
*/

int32_t main(){
  int fac[10];
  fac[0] = 1;
  for (int i = 1; i < 10; i++) fac[i] = fac[i - 1] * i;

  string ans(10, 'a');
  int n = 1e6;
  vector<int> done(10, 0);
  for (int i = 0; i < 10; i++) {
    for (int j = 0; j < 10; j++) {
      if (done[j]) continue;
      if (fac[9 - i] >= n) {
        ans[i] = char('0' + j);
        done[j] = 1;
        break;
      }
      n -= fac[9 - i];
    }
  }

  cout << ans << endl;

  return 0;
}