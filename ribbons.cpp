#include<bits/stdc++.h>
using namespace std;
int main(){
  int n,t;
  cin>>n>>t;
  if(n==1 && t==10){
      cout<<"-1"<<endl;
     }
    else if(n!=1 && t==10){
            for(int i=0; i<n-1; ++i)
                cout<<1;

                cout<<0;
                }
      else{
          for(i=0; i<n; ++i){
              cout<<t;
        }
    }
    return 0;
}
