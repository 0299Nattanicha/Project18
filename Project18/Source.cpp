#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int letters(char input[])
{

	int i = 0, sum = 0;
	{
		while (input[i] != '\0')
		{
			if (input[i] == 'A' )
			{
				if (input[i + 1] == 'O')
				{
					if (input[i + 2] == 'M')
					{
						sum++;
					}
				}
			}
			i++;
		}
	}
	return sum ;
}
int main()
{
	char input[1000];
	scanf("%s", &input);
	printf("AOM = %d", letters(input));
	return 0;
}
