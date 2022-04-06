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
  long long count=0; 
  // cout<<a.size()<<endl;
  for (auto i=0; i<a.size(); i++) {
  if ((a[i]=='4')|(a[i]=='7')) {
  count++;
  }
  }
  // cout<<count;
  if(count==4|count==7){
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


