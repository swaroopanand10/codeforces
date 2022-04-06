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
 string a;
  cin>>a;
  if(a[0]>96){
  a[0]=a[0]-32;
  }
  cout<<a;

}


int main ()
{
  file();
  solve();
  return 0;
}


