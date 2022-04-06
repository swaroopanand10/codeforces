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
 long long n;
  cin>>n;
  long long sum=0;
  long long a;
    long long even;
    long long odd;
  long long m;

  if((n&1)==1){
   m= 0.5*(n-1);  
 even= (m)*(2+(m-1)*1);
odd= (m+1)*(1+(m)*1);
  } 
  if((n&1)==0){
    m=0.5*n;
 even= m*(2+(m-1)*1);
 odd= m*(1+(m-1)*1);

  } 

  odd = -odd;
  cout<<even+odd;
  // cout<<"hello";

}


int main ()
{
  file();
  solve();
  return 0;
}


