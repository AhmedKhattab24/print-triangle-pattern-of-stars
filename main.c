#include <stdio.h>
#include <stdlib.h>

int main()
{
    int rows;
    printf("Enter the number of rows:");
    scanf("%i",&rows);

    for(int i=1; i<=rows; i++)
    {
        for(int s=1; s<=i; s++)
        {
            printf("*");
        }
    printf("\n");
    }

    return 0;
}
