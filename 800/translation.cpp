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
string n,t;
  cin>>n>>t;
  reverse(n.begin(), n.end());
  if(t==n){
    cout<<"YES";
    return;
  } 
  cout<<"NO";


}


int main ()
{
  file();
  solve();
  return 0;
}


