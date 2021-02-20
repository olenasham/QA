//#include <unistd.h>
#include <stdio.h>

void ft_putchar(char c)
{
  write(1, &c, 1);
}

void ft_swap(int *a, int *b)
{
 	int c;
 	c = *a;
 	*a = *b;
 	*b = c;
}

int main()
{
  ft_swap(int *a, int *b);
  printf("%d%d", a, b);
  return(0);
}