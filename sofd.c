#include <stdio.h>
int sofd(int n)
{
    if(n==0)
    {
       return 0;
    }
    else
    {
    return (n%10 + sofd(n/10));
    }
}
int main()
{
    int num,res;
    printf("enter a number:\n");
    scanf("%d",&num);
    res=sofd(num);
    printf("Sum of digits in %d = %d\n",num,res);
    return 0;
}

