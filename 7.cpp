#include<bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'
const int MOD = (int)1e9 + 7;
const double PI = acos(-1.0);

/*
10001st prime

By listing the first six prime numbers: 2, 3, 5, 7, 11, and 13, we can see that the 6th prime is 13.

What is the 10001st prime number?
*/

const int N = 10001;

// roughly n / log(n) = N => n < 1e6

int sieve() {
  int n = 1000000, cnt = 0;
  vector<bool> prime(n, true);
  for (int i = 2; i < n; i++) {
    if (!prime[i]) continue;
    cnt++;
    if (cnt == N) {
      return i;
    }
    for (int j = i * i; j < n; j += i) {
      prime[j] = false;
    }
  }
  return -1;
}

int32_t main(){
  
  cout << sieve() << endl;

  return 0;
}

