int main(void) {
  unsigned int x = 1;
  while (__VERIFIER_nondet_int()) {
    x += 2;
  }
//@ assert x % 2;
  return 0;
}