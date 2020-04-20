#include <tuple>

using namespace std;
using sz = size_t;

tuple<sz, sz, sz, sz> count_ng_tuples(sz N, string& S) {
  sz num_ng_tuples = 0;
  sz numRs = 0, numGs = 0, numBs = 0;

  for (sz i = 0; i < N; ++i) {
    switch (S[i]) {
      case 'R':
        numRs += 1;
        break;
      case 'G':
        numGs += 1;
        break;
      case 'B':
        numBs += 1;
        break;
    }

    for (sz j = i + 1, k = i + 2; k < N; j += 1, k += 2) {
      char a = S[i], b = S[j], c = S[k];
      if (a != b and b != c and c != a) num_ng_tuples += 1;
    }
  }
  return {numRs, numGs, numBs, num_ng_tuples};
}
