#include <lamp.h>
extern void abort(void);
extern void __assert_fail(const char *, const char *, unsigned int, const char *) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__noreturn__));
void reach_error() { __assert_fail("0", "id_b5_o10-2.c", 4, "reach_error"); }

int id(int x) {
  if (x==0) return 0;
  int ret = id((unsigned int)x-1) + 1;
  if (ret > 5) return 5;
  return ret;
}

int main(void) {
  int input = __lamp_any_i32();
  int result = id(input);
  if (result == 10) {
    ERROR: {reach_error();abort();}
  }
}
