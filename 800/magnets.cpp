#include<bits/stdc++.h>
#include <vector>
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
  int count=1;
  vector<int> vec(n);
  for (auto i=0; i<n; i++) {
    int a;
    cin>>a;
    vec[i]=a;
    if(i>0)
    {

  if (vec[i]!=vec[i-1]) {
        count++;
  }
    }
  }

   cout<<count;

}


int main ()
{
  file();
  solve();
  return 0;
}


