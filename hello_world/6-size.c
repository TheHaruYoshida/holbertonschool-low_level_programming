#include <stdio.h>
/*
   * main - main prints the size of various types on the computer it is compiled and run on.
   *
   * Description: printf() prints a message with the size of each type and each sizeof() gets the value of each type.
   * Return: A message wich each line contains its own message telling wich type its size value in byte(s).
   */
int main(void)
{
	printf("Size of a char: %ld byte(s)\n, Size of an int: %ld byte(s)\n, Size of a long int: %ld byte(s)\n, Size of a long long int: %ld byte(s)\n, Size of a float: %ld byte(s)\n", sizeof(char), sizeof(int), sizeof(long int), sizeof(long long int), sizeof(float));
	return (0);
}
