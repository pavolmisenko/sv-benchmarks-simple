#include <lamp.h>
extern void abort(void);
extern void __assert_fail(const char *, const char *, unsigned int, const char *) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__noreturn__));
void reach_error() { __assert_fail("0", "id2_b2_o3.c", 4, "reach_error"); }

unsigned int id(unsigned int x);
unsigned int id2(unsigned int x);

unsigned int id(unsigned int x) {
  if (x==0) return 0;
  unsigned int ret = id2(x-1) + 1;
  if (ret > 2) return 2;
  return ret;
}

unsigned int id2(unsigned int x) {
  if (x==0) return 0;
  unsigned int ret = id(x-1) + 1;
  if (ret > 2) return 2;
  return ret;
}

int main(void) {
  unsigned int input = __lamp_any_i32();
  unsigned int result = id(input);
  if (result == 3) {
    ERROR: {reach_error();abort();}
  }
}
