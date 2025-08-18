#include <iostream>
#include <algorithm>
using namespace std;
int main() {
int a[]={1,3,5,7};
int b[]={2,4,6,8};
int m=4,n=4;
for (inti=0;i<m;i++) {
if (a[i]>b[0]) {
swap(a[i],b[0]);
sort(b,b+n); 
}}
for (int i=0;i<m;i++){
cout <<a[i]<< " ";
}
for (int i = 0; i < n; i++){
cout <<b[i]<< " ";
}
return 0;
}