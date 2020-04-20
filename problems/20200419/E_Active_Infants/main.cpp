#include <iostream>
#include <vector>
#include <numeric>
#include <algorithm>
#include "../../../utils/vector.hpp"

using namespace std;
using sz = size_t;
using bigint = uint64_t;

template <class T>
void print_vector(vector<T>& v) {
  cout << "[";
  for (sz i = 0, n_minus_1 = v.size() - 1; i < n_minus_1; ++i) {
    cout << v[i] << ", ";
  }
  cout << v.back() << "]" << endl;
}

vector<int> stdinput() {
  sz N;
  cin >> N;

  vector<int> A(N);
  for (sz i = 0; i < N; ++i) {
    cin >> A[i];
  }

  return A;
}

int main() {
  auto A = stdinput();
  auto I = sorted_idx(A);

  for (auto e : A) {
    cout << e << endl;
  }

  return 0;
}
