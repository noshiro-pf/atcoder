#include <cmath>
#include <iostream>
#include <numeric>
#include <string>
#include <tuple>
#include <vector>

using namespace std;
using sz = size_t;

constexpr bool enable_dump = false;

template <class T>
void print_vector(vector<T>& v) {
  cout << "[";
  for (sz i = 0, n_minus_1 = v.size() - 1; i < n_minus_1; ++i) {
    cout << v[i] << ", ";
  }
  cout << v.back() << "]" << endl;
}

int main(int argc, char const *argv[]) {
  /* code */
  return 0;
}


