#include<bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'
const int MOD = (int)1e9 + 7;
const double PI = acos(-1.0);

/*
Circular primes

The number, 197, is called a circular prime because all rotations of the digits: 197, 971, and 719, are themselves prime.

There are thirteen such primes below 100: 2, 3, 5, 7, 11, 13, 17, 31, 37, 71, 73, 79, and 97.

How many circular primes are there below one million?
*/

const int N = 1e6;
vector<bool> prime;

void sieve() {
  prime.assign(N + 1, true);
  prime[0] = prime[1] = false;
  for (int i = 2; i < N; i++) {
    if (!prime[i]) continue;
    for (int j = i * i; j < N; j += i) prime[j] = false;
  }
}

int32_t main(){
  sieve();

  int ans = 0;
  for (int i = 2; i < N; i++) {
    string s = to_string(i);
    bool ok = true;
    for (int j = 0; j < (int)s.size(); j++) {
      string cur = s.substr(j) + s.substr(0, j);
      if (prime[stoi(cur)] == false) {
        ok = false;
        break;
      }
    }
    if (ok) {
      ans++;
    }
  }

  cout << ans << endl;

  return 0;
}