#include<bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'
const int MOD = (int)1e9 + 7;
const double PI = acos(-1.0);

/*
Largest prime factor

The prime factors of 13195 are 5, 7, 13 and 29.

What is the largest prime factor of the number 600851475143 ?
*/


int32_t main(){
  int n = 600851475143;
  int ans = 1;
  for (int i = 2; i * i <= n; i++) {
    if (n % i == 0) {
      ans = i;
      while (n % i == 0) {
        n /= i;
      }
    }
  }
  ans = max(ans, n);
  cout << ans << endl;

  return 0;
}