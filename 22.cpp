#include<bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'
const int MOD = (int)1e9 + 7;
const double PI = acos(-1.0);

/*
Names scores

Using names.txt (right click and 'Save Link/Target As...'), a 46K text file containing over five-thousand first names, begin by sorting it into alphabetical order. Then working out the alphabetical value for each name, multiply this value by its alphabetical position in the list to obtain a name score.

For example, when the list is sorted into alphabetical order, COLIN, which is worth 3 + 15 + 12 + 9 + 14 = 53, is the 938th name in the list. So, COLIN would obtain a score of 938 × 53 = 49714.

What is the total of all the name scores in the file?
*/

vector<string> process(string &s) {
  vector<string> v;
  string cur = "";
  for (auto x : s) {
    if (x >= 'A' && x <= 'Z') {
      cur += x;
    } else {
      if (cur.size() > 0) {
        v.push_back(cur);
        cur = "";
      }
    }
  }
  return v;
}

int32_t main(){
  freopen("/Users/deepak/Desktop/way2go/project-euler/p022_names.txt","r",stdin);  

  string s;
  getline(cin, s);
  
  vector<string> v = process(s);
  sort(v.begin(), v.end());
  
  int ans = 0;
  for (int i = 0; i < (int)v.size(); i++) {
    int tot = 0;
    for (auto x : v[i]) tot += (x - 'A' + 1);
    ans += tot * (i + 1);
  }

  cout << ans << endl;


  return 0;
}