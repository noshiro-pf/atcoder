#include <numeric>
#include <vector>
#include <algorithm>

using namespace std;

vector<size_t> seq(size_t len);

template <typename T>
auto comp_idx(vector<T>& ptr);

template <typename T>
vector<size_t> sorted_idx(vector<T>& values);
