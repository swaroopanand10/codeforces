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
auto vecinput(){
  
}

void solve(){
 int n,k, count=0;
  cin>>n>>k;
  vector<int> vec;
  for (auto i=0; i<n; i++) {
     int a;
     cin>>a;
     vec.push_back(a);
    // vec[i]=a;
  }
  int c= vec[k-1];
  for (auto value : vec) {
  if (value>=c&&value>0) {
   count++; 
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


