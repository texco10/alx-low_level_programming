#include <main.h>
#include <stdio.h


/**
 * isdigit - checks for upper case character
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
