#include <unistd.h>
#include <stdio.h>

void ft_putchar(char c)
{
  write(1, &c, 1);
}

int ft_atoi(char *str)
{
  int i, s = 0;
  {
    while (str[i] != '\0')
    {
      i++;
    }
    while (i >= 1)
    {
      i--;
      s = s + (str[i] - 48);
    }
  }
  return (s);
}

int main ()
{
  char *a;
  int i;
  a = "1234";
  i = ft_atoi(a);
  printf("%d", i);
  return(0);
}