#include <stdio.h>

int main(int argc, char const *argv[])
{
    for (int i = 2; i <= 9; i++)
    {
        printf("BANG NHAN %d\n", i);
        for (int j = 1; j <= 10; j++)
        {
            printf("%d X %d = %d \n", i, j, i*j);
        }
        printf("\n\n");
    }
    return 0;
}
