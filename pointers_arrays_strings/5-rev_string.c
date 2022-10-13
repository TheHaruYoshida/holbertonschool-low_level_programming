#include "main.h"

/**
  * rev_string - prints a string in reverse.
  * @s: string parameter.
  *
  * Description: Reverse a string, replacing each extreme with the letter
  * of the other extreme..
  * Return: void.
  */
void rev_string(char *s){
    char tmp;
    int count = 0;
    int i = 0;
    while(s[count]!='\0'){
        count++;
    }
    for (i=0; i<count/2 ; i++){
        tmp = s[i];
        s[i] = s[count-i-1];
        s[count-i-1] = tmp;
    }
}
