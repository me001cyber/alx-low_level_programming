#include <stdio.h>
#include <ctype.h>
/**
*main - Program to print alphabet letter followed by new line
*
*Return: return 0
*/
int main(void)
{
<<<<<<< HEAD
<<<<<<< HEAD
		char letter = 'a';
			while (letter <= 'z')
					{
								putchar(letter);
										letter++;
											}
				putchar('\n');
					return (0);
=======
	char letter = 'a';
	while (letter <= 'z')
=======
	int letter;
	
	for (letter = 'a'; letter <= 'z'; letter++)
>>>>>>> f59f072628d0c9b50ba67ef7e71e9abad31ba8f7
	{
		letter = tolower(letter);
		putchar(letter);
	}
	putchar('\n');
	return (0);
>>>>>>> b6847a73b004006ea921e1036f16943eefde7b38
}
