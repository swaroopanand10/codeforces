#include<bits/stdc++.h>
#include <string>
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
 int n;
  cin>>n;
  cin.ignore();
  string s;
  getline(cin, s);
  auto a = count(s.begin(), s.end(), '1');
  if (a>0) {
  cout<<("HARD");
    return;
  }
  cout<<"EASY";
}


int main ()
{
  file();
  solve();
  return 0;
}


