#include<bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'
const int MOD = (int)1e9 + 7;
const double PI = acos(-1.0);

/*
Smallest multiple

2520 is the smallest number that can be divided by each of the numbers from 1 to 10 without any remainder.

What is the smallest positive number that is evenly divisible by all of the numbers from 1 to 20?
*/


int32_t main(){
  int ans = 1;
  for (int i = 2; i <= 20; i++) {
    int gc = __gcd(ans, i);
    int num = ans / gc, den = i / gc;
    ans = (ans * den);
  }

  cout << ans << endl;

  return 0;
}