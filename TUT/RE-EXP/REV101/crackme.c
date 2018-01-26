#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(){
  char buffer[20];
  printf("Enter Password:");
  scanf("%s\n", buffer); // b.o but topic for someother time
  if (!strncmp(buffer, "p4ssW0rd", 8)){
    printf("right pass\n");
    return 0;
  }
  printf("meh..\n");
  return 1;
}
