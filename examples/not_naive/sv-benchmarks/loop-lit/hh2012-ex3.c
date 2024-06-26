// Source: Nicolas Halbwachs, Julien Henry: "When the Decreasing Sequence Fails", SAS 2012.
// Example 3.

#include <assert.h>
extern void abort(void);
void reach_error() { assert(0); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } }

int main() {
  int i = 0;
  while (i < 4) {
    int j = 0;
    while (j < 4) {
      i++;
      j++;
      __VERIFIER_assert(0 <= j);
      __VERIFIER_assert(j <= i);
      __VERIFIER_assert(i <= j + 3);
      __VERIFIER_assert(j <= 4);
    }
    __VERIFIER_assert(0 <= j);
    __VERIFIER_assert(j <= i);
    __VERIFIER_assert(i <= j + 3);
    __VERIFIER_assert(j <= 4);
    i = i - j + 1;
  }
  return 0;
}
