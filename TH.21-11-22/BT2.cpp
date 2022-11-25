#include <stdio.h>

void swap(int &a, int &b)
{
    int temp = a;
    a = b;
    b = temp;
    return;
}

int main(int argc, char const *argv[])
{
    int a,b;
    printf("nhap a, b: ");
    scanf("%d%d",&a,&b);
    swap(a,b);
    printf("da hoan doi: %d %d\n",a,b);
    return 0;
}
