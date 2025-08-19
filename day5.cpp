#include <iostream>
using namespace std;
int main() {
int arr[] = {16, 17, 4, 3, 5, 2};
int n = 6;
int max = arr[n-1];
cout << "Leaders: " << max;
for (int i = n-2; i >= 0; i--) {
if (arr[i] >= max) {
cout << "," << arr[i];
max = arr[i];
}
}
return 0;
}