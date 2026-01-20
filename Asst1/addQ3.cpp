#include <iostream>
#include <algorithm>
using namespace std;
int main() {
  int A[] = {5, 1, 3, 2, 4};
  int N = sizeof(A) / sizeof(A[0]);
  sort(A, A + N);
  int result = A[0] + A[1];
  cout << result << endl;
  return 0;
}