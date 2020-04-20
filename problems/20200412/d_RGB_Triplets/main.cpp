#include <iostream>
#include <tuple>
#include "./count_ng_tuples.hpp"

using namespace std;
using sz = size_t;

tuple<size_t, string> stdinput() {
  size_t N;
  string S;
  cin >> N;
  cin >> S;
  return {N, S};
}

int main() {
  auto [N, S] = stdinput();
  auto [numRs, numGs, numBs, num_ng_tuples] = count_ng_tuples(N, S);
  cout << numRs * numGs * numBs - num_ng_tuples << endl;

  return 0;
}
