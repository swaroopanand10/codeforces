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


auto solve(){
  int n;
  cin>>n;

 while (1) {
 n++;
  string s= to_string(n);
  set<int> u(s.begin(), s.end());
  if(u.size()==s.size()){
     cout<<n;
      return;
  }

}
}


int main ()
{
  file();
  solve();
  return 0;
}


