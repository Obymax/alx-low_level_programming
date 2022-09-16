#include "main.h"

/**
 *  * _isdigit - functions that check for digit character
 *   * @c: the character
 *    * Return: 1 if c is a digit overwise 0
 */

int _isdigit(int c)
{
	    char c;

	        printf("Enter a character: ");
		    scanf("%c",&c);

		        if (isdigit(c) == 0)
				        return 0;
			    else
				             printf("%c is a digit.",c);
			        return 1;
}
