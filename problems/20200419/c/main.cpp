#include <iostream>
#include <vector>

using namespace std;
using sz = size_t;

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

  vector<int> A;
  A.reserve(N - 1);

  for (sz i = 1; i < N; ++i) {
    int tmp;
    cin >> tmp;
    A.push_back(tmp);
  }

  return A;
}

vector<int> count(sz N, vector<int>& A) {
  vector<int> result(N, 0);

  for (sz i = 0; i < N - 1; ++i) {
    result[A[i] - 1]++;
  }

  return result;
}

int main() {
  auto A = stdinput();

  auto result = count(A.size() + 1, A);

  for (auto e : result) {
    cout << e << endl;
  }

  return 0;
}
