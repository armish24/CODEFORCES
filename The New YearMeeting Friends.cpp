#include<bits/stdc++.h>
using namespace std;
int main(){
int array[3];
for(int i=0;i<3;i++){
    cin>>array[i];
}
sort(array,array+3);
cout<<array[2]-array[0];
return 0;
}
