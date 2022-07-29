#include <stdio.h>

int strend(char *, char *);

int main(void)
{
  char str1[] = "Hello, world";
  char str2[] = "world";

  printf("String one is (%s)\n", str1);
  printf("String two is (%s)\n", str2);
 
  int result = strend(str1, str2);
  printf("The result is (%d)\n", result);

  return 0;
}

int strend(char *s, char *t)
{
  int counter;
  
  /* count number of characters and place pointer to last letter of second word */
  for(counter = 0; *t != '\0'; ++counter, *t++)  
    ;
  
  /* place pointer to position of last letter of first word */
  for ( ; *s != '\0'; *s++) 
    ;
    
  /* compare letters of words from the end */
  for ( ; counter > 0 && *s == *t; counter--, *--s, *--t)
    ;
    
  return (counter == 0) ? 1 : 0;
}
