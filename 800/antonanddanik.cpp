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
  string a;
  cin>>n>>a;
  int A = count(a.begin(),a.end(),'A');
  int D = count(a.begin(),a.end(),'D');
  if (A>D) {
  cout<<"Anton";
  } 
  if (D>A) {
  cout<<"Danik";
  } 
  if (D==A) {
  cout<<"Friendship";
  } 

}


int main ()
{
  file();
  solve();
  return 0;
}


