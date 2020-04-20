#include <iostream>
#include <vector>

using namespace std;
using sz = size_t;

int main() {
  // input
  sz N, M;
  cin >> N >> M;

  int rest = N;
  for (sz i = 0; i < M; ++i) {
    int tmp;
    cin >> tmp;
    rest -= tmp;
  }

  cout << (rest < 0 ? -1 : rest) << endl;

  return 0;
}
