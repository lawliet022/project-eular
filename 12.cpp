#include<bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'
const int MOD = (int)1e9 + 7;
const double PI = acos(-1.0);

/*
Highly divisible triangular number

The sequence of triangle numbers is generated by adding the natural numbers. So the 7th triangle number would be 1 + 2 + 3 + 4 + 5 + 6 + 7 = 28. The first ten terms would be:

1, 3, 6, 10, 15, 21, 28, 36, 45, 55, ...

Let us list the factors of the first seven triangle numbers:

 1: 1
 3: 1,3
 6: 1,2,3,6
10: 1,2,5,10
15: 1,3,5,15
21: 1,3,7,21
28: 1,2,4,7,14,28
We can see that 28 is the first triangle number to have over five divisors.

What is the value of the first triangle number to have over five hundred divisors?
*/

int div(int n) {
  map<int,int> m;
  for (int i = 2; i * i <= n; i++) {
    while (n % i == 0) {
      n /= i;
      m[i]++;
    }
  }
  if (n > 1) m[n]++;
  int ans = 1;
  for (auto x : m) {
    ans = (ans * (x.second + 1));
  }
  return ans;
}

int32_t main(){
  int no = 1;
  while (1) {
    int cnt = div(no * (no + 1) / 2);
    if (cnt > 500) {
      cout << no * (no + 1) / 2 << endl;
      break;
    }
    no++;
  }

  return 0;
}