#include <stdio.h>
int main()
{
    int n,i;
    printf("enter a  decimal number:\n");
    scanf("%d",&n);
    printf("binary number is:\n");
    for(i=7;i>=0;i--)
    {
        printf("%d",(n>>i)&1);
    }
    printf("\n");
    return 0;
}
