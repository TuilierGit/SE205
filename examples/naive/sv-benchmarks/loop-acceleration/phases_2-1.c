int main(void) {
  unsigned int x = 1;
  unsigned int y = __VERIFIER_nondet_uint();

  if (!(y > 0)) return 0;

  while (x < y) {
    if (x < y / x) {
      x *= x;
    } else {
      x++;
    }
  }

//@ assert x != y;
}