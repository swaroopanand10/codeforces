#include <algorithm>
#include<bits/stdc++.h>
using namespace std;

void file(){
  #ifndef online_judge
  // for getting input from input.txt file
  freopen("in.txt", "r", stdin);
  // printing the output to output.txt file
  freopen("out.txt", "w", stdout);
#endif
}


void solve(){
string s;
  cin>>s;
  int l=0;
  for (auto i=0; i<s.size(); i++) {
    if (s[i]>90) {
      l++;
    }

  }   

  int u= s.size()-l;
if (l>=u) {
transform(s.begin(), s.end(), s.begin(), ::tolower);
}
if (u>l) {
transform(s.begin(), s.end(), s.begin(), ::toupper);
}
cout<<s;
}

int main ()
{
  file();
  solve();
  return 0;
}


