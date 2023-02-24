#include<stdio.h>
int main(){
    int a=100;
    int *codex;
    int **codex1;
    codex=&a;
    codex1=&codex;
    // inilisation Null pointer
    int *codex3;
    
    printf("Value of a = %d\n", a );
	printf("Value of a using single pointer = %d\n", *codex );
	printf("Value of a using single pointer = %d\n", **codex1);
	
    // addreess excessing
    printf("\n");
    printf("addreess excessing\n");
    printf("address of  a = %u\n",&a);
    printf("address of  a = %u\n",codex);
    printf("address of codex = %u\n",&codex);
    printf("address of codex = %u\n",codex1);
    
    // value of null pointer
    printf("\n");
    printf("null pointer\n");
    
    // garbage value dega
    printf("address of  a = %d\n",codex3);

    // After decleration null pointer
    codex3=NULL;
    printf("address of  a = %d\n",codex3);

return 0;
}