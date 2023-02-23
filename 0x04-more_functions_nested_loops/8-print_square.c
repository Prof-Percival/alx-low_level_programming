#include"main.h"

/**
 * print_square - print a square using the character #
 *
 * @size: is the size of the square
 *
 * Return: Always 0 (Success)
*/

void print_squares(int size)
{

  int i;
  int k;

  if (size > 0)
    {
      for (i = 0; i < size; i++){
	for (k = 0; k < size; k++){
	 _putchar(35);
	}
	_putchar('\n');
      }
    }
  else{
    _putchar('\n');
  }
}
