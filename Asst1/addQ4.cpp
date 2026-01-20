#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main() {
    vector<int> A = {3, 1, 4, 2, 5};
    int k = 2;
    int n = A.size();
    sort(A.begin(), A.end());
    long long specialty = 0;
    for (int i = 0; i < n; i++) {
      int greaterCount = n - i - 1;
      if (greaterCount >= k) {
      specialty += A[i];
      }
    }
    cout << "Specialty of the sequence = " << specialty << endl;
    return 0;
}