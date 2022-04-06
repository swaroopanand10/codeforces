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
int n;
  cin>>n;
  for(auto i=0; i<n; i++) {
     string a;
     cin>>a;
    if (a.length()>10) {
     auto b= a.begin();
     auto c= a.end();
     int d = a.length();
     cout<<*b<<d-2<<*(c-1)<<endl;

    }
    else {
  cout<<a<<endl;
  }
  }


}


int main ()
{
  file();
  solve();
  return 0;
}


