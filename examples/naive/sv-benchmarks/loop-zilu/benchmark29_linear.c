int main() {
  int x = __VERIFIER_nondet_int();
  int y = __VERIFIER_nondet_int();
  if (!(x<y)) return 0;
  while (x<y) {
    x=x+100;
  }
//@ assert x >= y && x <= y + 99;
  return 0;
}