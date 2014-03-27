/*
** my_strcpy.c for my_strcpy in /home/rosey_c/rendu/Piscine-C-Jour_06/ex_01
**
** Made by rosey
** Login   <rosey_c@epitech.net>
**
** Started on  Mon Oct  7 09:52:58 2013 rosey
** Last update Sun Dec  8 14:30:37 2013 rosey
*/

char	*my_strcpy(char *dest, char *src)
{
  int	i;

  i = 0;
  while (src[i] != '\0')
    {
      src[i] = dest[i];
      return (dest[i]);
      i = i + 1;
    }
}
