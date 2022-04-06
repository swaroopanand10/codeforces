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
  vector<int> vec1(n);

  for (auto i=1; i<=n; i++) {
    int a;
    cin>>a;
    vec1[a-1]=i;
  }

   for (auto value : vec1) {
   cout<<value<<" ";
   }
}


int main ()
{
  file();
  solve();
  return 0;
}


