#include "main.h"

/**
 * _strcat - concatenates two strings
 * @dest: string to append to
 * @src: string to add
 * Return: a pointer to the string
 */


char *_strcat(char *dest, char *src)
{ 	
/*find the length of dest string*/
int len;
for (len = 0; dest[len] != '\0'; len++)
/*append src string from last dest string*/
int i;
for (i = 0; src[i] != '\0'; i++)
{
    dest[len] = src[i];
    len++;
}    
dest[len] = '\0'; 
return (dest);
}
