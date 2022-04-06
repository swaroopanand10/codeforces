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
  string s;
  cin>>s;
  int x,y;
  //uppercase 65 to 90 and lowercase 97 to 122
  for (auto i=65, j=97; i<91; i++, j++) {
    auto f1= s.find(i);
    auto f2= s.find(j); 
    if(f1!=string::npos|f2!=string::npos){

      continue;
    } 
    cout<<"NO";
    return;
  }

  cout<<"YES";

}


int main ()
{
  file();
  solve();
  return 0;
}


