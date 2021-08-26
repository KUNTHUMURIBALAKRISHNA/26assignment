#include <stdio.h>
int fun(int *add,int *sub,int *mul,int *divi,int a,int b)
{
    *add=a+b;
    *sub=a-b;
    *mul=a*b;
    *divi=a/b;
}
int main()
{
    int a,b,add,sub,mul,divi;
    printf("enter a values:\n");
    scanf("%d %d",&a,&b);
    fun(&add,&sub,&mul,&divi,a,b);
    printf("add=%d\n",add);
    printf("sub=%d\n",sub);
    printf("mul=%d\n",mul);
    printf("divi=%d",divi);
    return 0;
}
