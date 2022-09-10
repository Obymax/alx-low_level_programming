/* C Program to Print Alphabets from a to z */

#include <stdio.h>
 
int main(void)
{
	  	char ch;

		printf("\n List of Alphabets from a to z are : \n");  
		for(ch = 'a'; ch <= 'z'; ch++)
		{
		printf(" %c\t", ch);	
		}
				  
		return 0;
}
