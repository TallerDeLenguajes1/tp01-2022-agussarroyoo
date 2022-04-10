#include <stdio.h>

int main() {
    printf("hola mundo\n");

    int variable, *pVariable;
    pVariable = &variable;

    printf("%d\n", *pVariable);
    printf("%d\n", pVariable);
    printf("%d\n", &variable);
    printf("%d\n", &pVariable);
    printf("%d\n", pVariable);
    printf("%d\n", sizeof(variable));
    
}