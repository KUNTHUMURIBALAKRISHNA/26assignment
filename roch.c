#include<stdio.h>
#include<string.h>
int remchar(char str[], char ch);
int  main()
{
   char str[10];
   char ch;
   printf("\nEnter the string : ");
   gets(str);
   printf("\nEnter character which you want to remove:\n");
   scanf("%c", &ch);
   remchar(str, ch);
}
int remchar(char str[], char ch)
{
   int i, j = 0;
   int size;
   char str1[10];
   size = strlen(str);
   for (i = 0; i < size; i++)
   {
      if (str[i] != ch) 
      {
         str1[j]=str[i];
         j++;
      }
   }
   str1[j] = '\0';
   printf("new string is:%s", str1);
}

