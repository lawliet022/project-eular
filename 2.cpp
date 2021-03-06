#include<bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'
const int MOD = (int)1e9 + 7;
const double PI = acos(-1.0);

/*
Even Fibonacci numbers

Each new term in the Fibonacci sequence is generated by adding the previous two terms. 
By starting with 1 and 2, the first 10 terms will be:

1, 2, 3, 5, 8, 13, 21, 34, 55, 89, ...

By considering the terms in the Fibonacci sequence whose values do not exceed four million, 
find the sum of the even-valued terms.
*/

const int N = 4e6;
int32_t main(){
  int a = 1, b = 1, c = 2;
  int ans = 0;
  while (c <= N) {
    if (c % 2 == 0) ans += c;
    a = b;
    b = c;
    c = a + b;
  }
  cout << ans << endl;

  return 0;
}