#include <iostream>
#include <numeric>

using namespace std;

int gcd3(int x, int y, int z) { return gcd(x, gcd(y, z)); }

int main(int argc, char const *argv[]) {
  // input
  int K;
  cin >> K;

  int sum = 0;
  for (int a = 1; a <= K; ++a) {
    for (int b = 1; b <= K; ++b) {
      for (int c = 1; c <= K; ++c) {
        sum += gcd3(a, b, c);
      }
    }
  }
  cout << sum << endl;
  return 0;
}
