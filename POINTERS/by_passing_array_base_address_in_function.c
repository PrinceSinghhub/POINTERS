#include<stdio.h>
void func(int *ptr);
int main(){
    int pr[5]={1,2,3,4,5};
    func(pr);
     // change the adress of array for change address excessing
    func(pr);
return 0;
}

void func(int *ptr)
{
    for (int i = 0; i < 4; i++)
    {
        printf("The value at %d is %d\n", i, *(ptr + i));
    }
    // change the adress of array
    *(ptr + 2) = 6534;
}
