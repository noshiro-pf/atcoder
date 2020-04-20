#include <iostream>
#include <tuple>
#include "./count_ng_tuples.hpp"

using namespace std;
using sz = size_t;

tuple<sz, sz, sz, sz> count_ng_tuples(sz N, string& S);

sz naive_count_ok_tuples(sz N, string& S) {
  sz num_ok_tuples = 0;

  for (sz i = 0; i < N; ++i) {
    for (sz j = i; j < N; ++j) {
      for (sz k = j; k < N; ++k) {
        char a = S[i], b = S[j], c = S[k];
        if (a != b and b != c and c != a and j - i != k - j) num_ok_tuples += 1;
      }
    }
  }

  return num_ok_tuples;
}

sz gen_testcase(string& S, int max_str_len) {
  sz N = rand() % max_str_len;
  S.clear();
  for (sz _ = 0; _ < N; ++_) {
    auto r = rand() % 3;
    S.push_back(r == 0 ? 'R' : r == 1 ? 'G' : 'B');
  }

  return N;
}

void test(int loop, int max_str_len) {
  int ok = 0, ng = 0;
  string S;
  S.reserve(max_str_len);

  for (int i = 0; i < loop; ++i) {
    cout << "loop: " << i + 1 << ", str = \'" << S << "\"" << endl;
    auto N = gen_testcase(S, max_str_len);

    auto [numRs, numGs, numBs, num_ng_tuples] = count_ng_tuples(N, S);
    sz answer = numRs * numGs * numBs - num_ng_tuples;
    sz answer_naive = naive_count_ok_tuples(N, S);

    if (answer != answer_naive) {
      ng++;
    } else {
      ok++;
    }
  }

  printf("ok: %d, ng: %d\n", ok, ng);
}



int main(int argc, char const *argv[]) {
    if (argc == 3) {
    int loop = atoi(argv[1]);
    int max_str_len = atoi(argv[2]);
    printf("#loop: %d, max_str_len: %d\n", loop, max_str_len);
    test(loop, max_str_len);
    return 0;
  }


  return 0;
}
