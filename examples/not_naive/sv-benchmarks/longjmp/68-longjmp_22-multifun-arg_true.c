// This file is part of the SV-Benchmarks collection of verification tasks:
// https://gitlab.com/sosy-lab/benchmarking/sv-benchmarks
//
// SPDX-FileCopyrightText: 2022-2023 University of Tartu & Technische Universität München
//
// SPDX-License-Identifier: MIT
#include <assert.h>
extern void abort(void);
void reach_error() { assert(0); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } }

#include <stdio.h>
#include <stdlib.h>
#include <setjmp.h>

jmp_buf env_buffer;
int global = 0;

void foo() {
   int local = 7;
   longjmp(env_buffer, 2);
}


void fun(volatile int* ptr) {
   global = 42;
   *ptr = 1;
   foo();
}


int main () {
   volatile int val = 0;

   __VERIFIER_assert(global == 0);
   int x = setjmp( env_buffer);
   if(0 == x) {
      fun(&val);
   } else {
      __VERIFIER_assert(x == 2);
      __VERIFIER_assert(val == 1);
      __VERIFIER_assert(global == 42);
   }

   return(0);
}