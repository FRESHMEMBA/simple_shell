#include "main.h"

/*
 * main - Starting point of the program.
 * Return: 0 on success.
 */
int main(void)
{
	char *pntr;	/*Pointer to the string containing the user input*/
	size_t len = 0;	/*Length of the string pointed to by pntr*/
	ssize_t n;	/*Number of characters read from stdin*/

	while (true)
	{
		prompt();
		n = getline(&pntr, &len, stdin);
		/*Exits the program if getline returned -1*/
		if (n == -1)
		{
			return (-1);
		}

		free(pntr);
	}

	return (0);
}
