#include <numeric>
#include <vector>
#include <algorithm>

using namespace std;

vector<size_t> seq(size_t len) {
  vector<size_t> v(len);
  iota(v.begin(), v.end(), 1);
  return v;
}

template <typename T>
auto comp_idx(vector<T>& ptr) {
  return [ptr](int l, int r) { return ptr[l] < ptr[r]; };
}

template <typename T>
vector<size_t> sorted_idx(vector<T>& values) {
  auto indice = seq(values.size());
  sort(indice.begin(), indice.end(), comp_idx(values));
  return indice;
}
