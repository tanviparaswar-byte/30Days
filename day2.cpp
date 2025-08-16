#include <iostream>
using namespace std;
int main(){
int a[]={1,2,4,5);
int n=5;
int sum=0;
for (int i=0;i<n-1;i++){
sum=sum+a[i];
}
int total=n*(n+1)/2;
int missingnum= total-sum;
cout<<"missing number is:"<<missingnum;
return 0;
}