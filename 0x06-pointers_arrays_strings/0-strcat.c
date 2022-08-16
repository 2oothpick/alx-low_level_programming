#include "main.h"


char *_strcat(char *dest, char *src)
{
    //find the length of dest string
    int len;
    for(len = 0; dest[len] != '\0'; len++){}
    //append src string from last dest string
    int i;
    for (i = 0; src[i] != '\0'; i++)
    {
        dest[len] = src[i];
        len++;
    }    

    return dest;
}
