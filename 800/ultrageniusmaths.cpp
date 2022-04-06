#include<bits/stdc++.h>
#include <bitset>
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
  string a,b;
  cin>>a>>b;
  long long n1= a.length();
  bitset<100> x(a),y(b);
  bitset<100> z = (x^y);
  string ans = z.to_string(); 
  ans.erase(0, 100-n1); 
  cout<<ans;

}


int main ()
{
  file();
  solve();
  return 0;
}


