#include<stdio.h>
#include<ctype.h>
#include<string.h>
int main()
{
    char str[5000];
    char *ptr;
    ptr = str;
    int i;
   do
    {
    	   scanf("%s", str);
    	   if (strcmp(str, "finished") != 0)
    	   {
          		  printf("%c", toupper(str[0]));
          		  printf("%s", strlwr((ptr+1)));
			printf("\n");
		   }
    } while(strcmp(str, "finished") != 0);
    
    return 0;
}

