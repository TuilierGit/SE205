int main() {
  int x = __VERIFIER_nondet_int();
  int y = __VERIFIER_nondet_int();
  if (!(x < 100 && y < 100)) return 0;
  while (x < 100 && y < 100) {
    x=x+1;
    y=y+1;
  }
//@ assert x == 100 || y == 100;
  return 0;
}