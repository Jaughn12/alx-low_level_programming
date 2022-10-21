#include <stdio.h>

/**
 * main - Prints the alphabet in lowercase.
 *
 * Return: Always 0.
 */
int main(void)
{
	char a,b,c;
    	for (a='0';a<='9';a++)
    	{
        	for (b='0';b<='9';b++)
        	{
            		for (c='0';c<='9';c++)
            		{
                		if (a==c||b==c||a==b)
                		{
                    			continue;
                		}
                		else if (b>c||a>b)
                		{
                    			continue;
                    
                		}
                		else
                		{
                    			if (a=='7')
                    			{
                        			putchar(a);
                        			putchar(b);
                        			putchar(c);
                    			}
                    			else
                    			{
                        			putchar(a);
                        			putchar(b);
                        			putchar(c);
                        			putchar(',');
                        			putchar(' ');
                    			}
                    
                		}
                
            		}
        	}
    	}

	return (0);
}
