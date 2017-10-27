#include <stdio.h>
#include <string.h>
#include <stdlib.h>
void func(int key){
	char buff[32];
	printf("Enter input : ");
	gets(buff);
	if(key != 0x44332211){
		printf("Bad luck\n");
                return ;	
	} else {
		printf("Aha! well done\n");
} 

}
int main(int argc, char* argv[]){
	func(0xdeadbeef);
	return 0;
}

