#include <stdio.h>
//  pointer to pointer or double pointer
int main()
{
	int a = 7;

	// pointer for a or single pointer
	int *codex;

	// double pointer for codex
	int **codex1;

	// assing a address of (a) in codex
	codex = &a;
	
	// assing a address of (codex) in codex1
	codex1=&codex;
	
	// Displaying value of a using
	// both single and double pointers
	printf("Value of a = %d\n", a );
	printf("Value of a using single pointer = %d\n", *codex );
	printf("Value of a using double pointer = %d\n", **codex1);
	
    // addreess excessing
    printf("\n");
    printf("addreess excessing\n");
    printf("address of  a = %u\n",&a);
    printf("address of  a = %u\n",codex);
    printf("address of codex = %u\n",&codex);
    printf("address of codex = %u\n",codex1);
return 0;
}
