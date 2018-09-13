#include <bits/stdc++.h>
using namespace std;

string a, b, c, d;
int cnt; string ans;

const string days[] = {
  "MON", "TUE", "WED", "THU", "FRI", "SAT", "SUN"
};

void comp(const string& a, const string &b)
{
  for (unsigned i = 0; i < min(a.length(), b.length()); ++i)
  {
    if (a[i] == b[i]) {
      if (!isalpha(a[i])) continue;
      switch(cnt) {
        case 0: {
          ans += days[tolower(a[i]) - 'a'];
          ans += ' ';
          break;
        }
        case 1: {
          int num = i;
          if (num >= 10) {
            ans += '1';
            num -= 10;
          }
          else ans += '0';
          ans += char('0' + num);
          ans += ':';
          break;
        }
        case 2: {
          int num = i;
          if (num >= 10) {
            ans += '1';
            num -= 10;
          }
          else ans += '0';
          ans += char('0' + num);
          break;
        }
      }
      ++cnt;
    }
  }
  cout << endl;
}

signed main()
{
  cin >> a >> b >> c >> d;
  comp(a, b);
  comp(c, d);
  cout << ans << endl;
}
