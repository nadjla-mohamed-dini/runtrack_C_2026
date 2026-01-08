#include<stdio.h>

void super_pointer(int ****p)
{
} 
int main(void)
{
    int a = 42;
    int *p1 = &a;
    int **p2 = &p1;
    int ***p3 = &p2;
    int ****p4 = &p3;

    super_pointer(p4);
    printf("%d\n", ****p4);

    return 0;
}