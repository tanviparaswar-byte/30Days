#include <iostream>
using namespace std;
int main(){
int a[]={3,1,3,4,2};
int n=5;
int duplicatenum;
for(int i=0;i<n;i++){
for(int j=i+1;j<n;j++){
if(a[i]==a[j]){
duplicatenum=a[j];
}
}
}
cout<<"Duplicate number is:"<<duplicatenum;
return 0;
}