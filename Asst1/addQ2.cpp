#include <iostream>
#include <algorithm>
using namespace std;
int main() {
    int A[]={1,5,3,8,12,9,2};
    int N=sizeof(A)/sizeof(A[0]);
    sort(A,A+N);
    int l=0,maxLen=0;
    for (int r = 0; r < N; r++) {
      while (A[r] - A[l] > 10) {
      l++;
    }
      maxLen=max(maxLen,r-l+1);
    }
    cout<<"Maximum length of good subsequence = "<<maxLen<<endl;
    return 0;
}