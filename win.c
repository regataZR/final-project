#include<stdio.h>
#include<stdlib.h>
#define lim 11 

int i, j;

void win(int g[lim][lim], int c[lim][lim])
{
	printf("\n★恭喜你贏了！你就是神選之人☆\n\n");

	for (i = 1; i < lim; i++)
	{
		for (int j = 1; j < lim; j++)
		{
			if (i == 1 && j == 1)
			{
				printf("   1 2 3 4 5 6 7 8 9 10\n\n");
			}
			if (i < 10)
			{
				if (j == 1)
				{
					printf("%d  ", i);
				}
				if (g[i][j] == 1)
				{
					printf("☆");
				}
				else
				{
					printf("%d ", c[i][j]);
				}
			}
			else
			{
				if (j == 1)
				{
					printf("%d ", i);
				}
				if (g[i][j] == 1)
				{
					printf("☆");
				}
				else
				{
					printf("%d ", c[i][j]);
				}
			}
		}
		printf("\n");
	}
}
