#include <stdlib.h>

/*
 * Expected memory structure
 * |-----------------------|<--------- Low addresses
 * |                       |
 * |                       |
 * |                       |
 * |                       |
 * |-----------------------|<--------- Frame pointer (Top of stack)
 * |   buffer[0]='A'=0x41  | 1 byte
 * |-----------------------|
 * |       buffer[1]       |   "
 * |-----------------------|
 * |       buffer[2]       |   "
 * |-----------------------|
 * |       buffer[3]       |   "
 * |-----------------------|
 * |       buffer[4]       |   "
 * |-----------------------|
 * |           ...         |   "
 * |-----------------------|
 * |       buffer[9]       |   "
 * |-----------------------|
 * |         flag          | 4 bytes 
 * |-----------------------|
 * |  Saved Frame pointer  |   "
 * |-----------------------|
 * |     return address    |   "  <--- Address to return to in main
 * |-----------------------|
 * |           a           |   "
 * |-----------------------|
 * |           b           |   "
 * |-----------------------|
 * |           c           |   "
 * |-----------------------|
 * |           d           |   "
 * |-----------------------|<--------- High addresses

*/

void test_function(int a, int b, int c, int d) {
  int flag;
  char buffer[10];
  flag = 31337;
  buffer[0] = 'A';
}
int main() {
  test_function(1, 2, 3, 4);
}
