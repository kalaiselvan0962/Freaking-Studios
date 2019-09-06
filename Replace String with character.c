#include <stdio.h>
#include <string.h>
int main()
{
  	char str[100], ch, nch;
  	int i;
  	printf("\nEnter String:  ");
  	gets(str);
  	printf("\nEnter the Character to Search: ");
  	scanf("%c", &ch);
  	getchar();
  	printf("\n Please Enter the New Character:  ");
  	scanf("%c",&nch);
  	for(i=0;i<=strlen(str);i++)
  	{
  		if(str[i]==ch)  
		{
  			str[i]=nch;
 		}
	}
	printf("\n Replaced String:'%c' with '%c' = %s ", ch, nch, str);
	
  	return 0;
}
