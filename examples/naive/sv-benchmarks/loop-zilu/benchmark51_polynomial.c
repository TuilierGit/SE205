int main() {
  int x = __VERIFIER_nondet_int();
  
  if (!((x>=0) && (x<=50))) return 0;
  while (__VERIFIER_nondet_bool()) {
    if (x>50) x++;
    if (x == 0) { x ++;
    } else x--;
  }
//@ assert (x>=0) && (x<=50);
  return 0;
}