#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void hidden(){
  printf("Congratulations you found me!\n");

}
int main(int argc, char* argv[]){
  char user_input[32];
  user_input[31] = '\0';
  printf("Give me a string, I'll print it back\n");
  gets(user_input);
  printf("%s\n", user_input);
  return 0;
}
