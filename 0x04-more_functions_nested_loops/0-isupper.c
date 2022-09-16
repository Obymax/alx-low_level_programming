#include "main.h"

/**
 *  * _isupper - functions that check for uppercase character
 *   * @c: the character
 *    * Return: 1 if c is uppecase overwise 0
 */

int _isupper(int c)
{
	    char c;

	        c = 'A';
		    printf("%c: %d\n", c, _isupper(c));
		        c = 'a';
			    printf("%c: %d\n", c, _isupper(c));
			        return (0);
}
