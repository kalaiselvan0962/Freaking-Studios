#include <stdio.h>
void main()
{
   char str[100],ch;
   int i,f = 0;
   printf("Enter string:");
   gets(str);
   printf("Enter a character to find frequency: ");
   scanf("%c",&ch);
   for(i=0;str[i]!='\0';i++)
   {
       if(ch==str[i])
           f++;
   }
   printf("%d",f);
   
}
