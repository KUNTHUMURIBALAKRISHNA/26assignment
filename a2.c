#include <stdio.h>
#define SIZE sizeof(int)*8  
int main()
{
    int i, zeros, ones,n;
    printf("Enter any number:\n");
    scanf("%d",&n);
    zeros = 0;
    ones = 0;
    for(i=0;i<SIZE;i++)
    {
        if(n&1)
        {
            ones++;
        }
        else
        {
            zeros++;
        }
        /* Right shift bits of n to one position */
        n>>= 1;
    }
    printf("Total zeros is %d\n", zeros);
    printf("Total ones  is %d", ones);
    return 0;
}
