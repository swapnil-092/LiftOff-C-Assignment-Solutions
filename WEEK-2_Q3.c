#include <stdio.h>
#include <string.h>
 
int main()
{
  	char str[50];
  	int i, total;
  	total = 1;
 
  	printf("Please Enter any String :  ");
  	gets(str);
  	 	   	
  	for(i = 0; str[i] != '\0'; i++)
	{
		if(str[i] == ' ' || str[i] == '\n')
		{
			total++;	
		} 
	}	
	printf("The total words are - %d", total);
	
  	return 0;
}