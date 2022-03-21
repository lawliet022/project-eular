#include<bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'
const int MOD = (int)1e9 + 7;
const double PI = acos(-1.0);

/*
Quadratic primes
*/

const int N = 1e6 + 10;
vector<bool> p(N, true);

void sieve() {
  p[0] = p[1] = false;
  for (int i = 2; i < N; i++) {
    if (!p[i]) continue;
    for (int j = i * i; j < N; j += i) p[j] = false;
  }
}

bool isPrime(int n) {
  assert(n <= 1e6);
  return p[n];
}

int32_t main(){
  sieve();
  int A, B, best = 0;
  for (int a = -1000; a <= 1000; a++) {
    for (int b = -1000; b <= 1000; b++) {
      int n = 0;
      while (1) {
        int cur = n * n + a * n + b;
        if (cur < 0) break;
        if (!isPrime(cur)) break;
        n++;
      }
      if (n > best) {
        best = n;
        A = a; B = b;
      }
    }
  }
  cout << A * B << endl;

  return 0;
}