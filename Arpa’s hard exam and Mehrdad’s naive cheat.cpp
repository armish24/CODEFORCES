#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    if(n==0)
        cout<<"1";
    else{
    if((n-1)%4==0)
        cout<<"8";
    else if(n%4==0)
        cout<<"6";
    else if((n+1)%4==0)
        cout<<"2";
    else cout<<"4";}
    return 0;

}
