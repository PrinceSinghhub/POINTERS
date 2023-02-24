#include <stdio.h>
//  pointer to pointer to pointer or triple  pointer
int main()
{
	int a = 7;

	// pointer for a or single pointer
	int *codex;

	// double pointer for codex
	int **codex1;

    // triple pointer for codex1
    int ***codex2;

	// assing a address of (a) in codex
	codex = &a;
	
	// assing a address of (codex) in codex1
	codex1=&codex;

    // assing a address of (codex1) in codex2
	codex2=&codex1;
	
	// Displaying value of a using
	// single and double and triple pointers
	printf("Value of a = %d\n", a );
	printf("Value of a using single pointer = %d\n", *codex );
	printf("Value of a using double pointer = %d\n", **codex1);
    printf("Value of a using triple pointer = %d\n", ***codex2);
	
    // addreess excessing
    printf("\n");
    printf("addreess excessing\n");
    printf("address of  a = %u\n",&a);
    printf("address of  a = %u\n",codex);
    printf("address of codex = %u\n",&codex);
    printf("address of codex = %u\n",codex1);
    printf("address of codex1 = %u\n",&codex1);
    printf("address of codex1 = %u\n",codex2);
return 0;
}
