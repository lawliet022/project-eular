#include<bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'
const int MOD = (int)1e9 + 7;
const double PI = acos(-1.0);

/*
Special Pythagorean triplet

A Pythagorean triplet is a set of three natural numbers, a < b < c, for which,

a2 + b2 = c2
For example, 32 + 42 = 9 + 16 = 25 = 52.

There exists exactly one Pythagorean triplet for which a + b + c = 1000.
Find the product abc.
*/

int32_t main(){
  for (int a = 1; a < 1000; a++) {
    for (int b = a; b < 1000; b++) {
      int res = a * a + b * b;
      int c = sqrt(res);
      if (c * c == res && a + b + c == 1000) {
        cout << a * b * c << endl;
      }
    }
  }

  return 0;
}