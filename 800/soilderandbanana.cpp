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
  long long k,n,w;
  cin>>k>>n>>w;
  long long t= k*(w*(w+1)/2);
  // cout<<t<<endl;
  if (t>n) {
  long long d=t-n;
  cout<<d;
  }
  else {
    cout<<0; 
}
}


int main ()
{
  file();
  solve();
  return 0;
}


