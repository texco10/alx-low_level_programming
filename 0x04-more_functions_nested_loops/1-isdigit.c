#include <stdio.h>



/**

 * _isdigit - checks for uppercase character

 * @c: Variable text

 * Return: Always 0.

 */

int _isdigit(int c)
  
{
  
  if (c >= 'A' && c <= 'Z')
    
    {
      
      return (1);
      
    }
  
  else
    
    {
      
      return (0);
      
    }
  
}
