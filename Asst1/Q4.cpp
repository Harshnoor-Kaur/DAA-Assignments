#include <iostream>
using namespace std;
int main() {
    int arr[]={-2,-5,6,-2,-3,1,5,-6};
    int n=sizeof(arr)/sizeof(arr[0]);
    int maxSoFar=arr[0];
    int maxEndingHere=arr[0];
    for (int i = 1; i < n; i++) {
      maxEndingHere = max(arr[i], maxEndingHere + arr[i]);
      maxSoFar = max(maxSoFar, maxEndingHere);
  }
  cout << "Maximum subarray sum = " << maxSoFar << endl;
  return 0;
}