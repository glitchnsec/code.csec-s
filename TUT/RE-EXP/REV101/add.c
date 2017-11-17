#include <stdlib.h>
#include <stdio.h>

int add(int l_op, int r_op) {
    // not so perfect mul
    int factor = abs(r_op) == 0 ? 0 : r_op / abs(r_op);
    int result = l_op;
    int i = abs(r_op);
    while (i) {
        result += factor;
        i -= 1;
    }
    return result;
}

int main(int argc, char * argv[]){
    if (argc != 3) {
        fprintf(stderr, "usage: ./%s left_operand right_operand\n", argv[0]);
        exit(1);
    }
    fprintf(stdout, "add(%d, %d) = %d\n", atoi(argv[1]), atoi(argv[2]), add(atoi(argv[1]), atoi(argv[2])));
    return 0;
}
