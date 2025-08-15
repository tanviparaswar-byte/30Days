#include <iostream>
using namespace std;
int main(){
int a[}={0,1,2,1,0,2,1,0}
int n=8;
int i,j;
for (i=0;i<n-1;i++){
for (j=0;j<n-1-i;j++){
if (a[j]>=a[j+1]){
int temp=a[j];
a[j]=a[j+1];
a[j+1]=temp;
}
}
}
for (i=0;i<n;i++){
cout<<a[i];
if (i!=n-1){
cout<<",";
}
}
return 0;
}
