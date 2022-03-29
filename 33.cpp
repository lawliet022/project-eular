#include<bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'
const int MOD = (int)1e9 + 7;
const double PI = acos(-1.0);

/*
Digit cancelling fractions

The fraction 49/98 is a curious fraction, as an inexperienced mathematician in attempting to simplify it may incorrectly believe that 49/98 = 4/8, which is correct, is obtained by cancelling the 9s.

We shall consider fractions like, 30/50 = 3/5, to be trivial examples.

There are exactly four non-trivial examples of this type of fraction, less than one in value, and containing two digits in the numerator and denominator.

If the product of these four fractions is given in its lowest common terms, find the value of the denominator.
*/

int32_t main(){
  int num = 1, den = 1;
  for (int i = 11; i <= 99; i++) {
    for (int j = i + 1; j <= 99; j++) {
      if (i % 10 == 0 || j % 10 == 0) continue;
      string s1 = to_string(i), s2 = to_string(j);
      int ii = -1, jj = -1;
      if (s1[0] == s2[0]) {
        ii = s1[1] - '0', jj = s2[1] - '0';
      } else if (s1[0] == s2[1]) {
        ii = s1[1] - '0', jj = s2[0] - '0';
      } else if (s1[1] == s2[0]) {
        ii = s1[0] - '0', jj = s2[1] - '0';
      } else if (s1[1] == s2[1]) {
        ii = s1[0] - '0', jj = s2[0] - '0';
      } 
      if (ii == -1) continue;
      int common = __gcd(ii, jj);
      ii /= common; jj /= common;


      int x = i, y = j;
      common = __gcd(x, y);
      x /= common; y /= common;

      if (ii == x && jj == y) {
        num *= x;
        den *= y;
      }
    }
  }
  int common = __gcd(num, den);
  cout << den / common << endl;

  return 0;
}