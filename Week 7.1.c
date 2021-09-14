#include<stdio.h>
#include<stdio.h>
#include<ctype.h>
#include<string.h>
int main()
{
    char str[5000];
    int i;
   do
    {
    	   scanf("%s", str);
    	   if (strcmp(str, "finished") != 0)
    	   {
    	   	for (i=0;i<strlen(str);i++)
    			{
    		 	if (i==0)
      		   {
          		  printf("%c", toupper(str[0]));
      		   }
      			 else 
     		   {
          		  printf("%c", tolower(str[i]));
     		   }
    	   
				}
			printf("\n");
		   }
    } while(strcmp(str, "finished") != 0);
    
    return 0;
}

