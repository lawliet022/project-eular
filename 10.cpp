#include<bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'
const int MOD = (int)1e9 + 7;
const double PI = acos(-1.0);

/*
Summation of primes

The sum of the primes below 10 is 2 + 3 + 5 + 7 = 17.

Find the sum of all the primes below two million.
*/

const int N = 2e6;

int sieve() {
  int ans = 0;
  vector<bool> prime(N, true);
  for (int i = 2; i < N; i++) {
    if (!prime[i]) continue;
    ans += i;
    for (int j = i * i; j < N; j += i) prime[j] = false;
  }
  return ans;
}

int32_t main(){
  cout << sieve() << endl;

  return 0;
}