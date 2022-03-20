#include<bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'
const int MOD = (int)1e9 + 7;
const double PI = acos(-1.0);

/*
Sum square difference

The sum of the squares of the first ten natural numbers is,

The square of the sum of the first ten natural numbers is,

Hence the difference between the sum of the squares of the first ten natural numbers and the square of the sum is .

Find the difference between the sum of the squares of the first one hundred natural numbers and the square of the sum.
*/

int32_t main(){
  int ans = 0, n = 100;
  for (int i = 0; i <= n; i++) {
    ans += i * i;
  }

  cout << (n * (n + 1) * n * (n + 1)) / 4 - ans << endl;

  return 0;
}