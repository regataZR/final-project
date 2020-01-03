#include<stdio.h>
#include<stdlib.h>
#define lim 11 

int i, j;
int s1, s2;

void lose(int g[lim][lim],int c[lim][lim])
{
	printf("\nPlease Avoid The Mine And Enter The Safe Regin(? ?)：");
	scanf_s("%d %d", &s1, &s2);
	if (g[s1][s2] == 1)
	{
		printf("\n你踩到地雷了！遊戲結束~\n\n");


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

					if (c[i][j] != 30)
					{
						printf("%d ", c[i][j]);
					}
					else if (g[i][j] == 1)
					{
						printf("★");
					}
					else
					{
						printf("□");
					}
				}
				else
				{
					if (j == 1)
					{
						printf("%d ", i);
					}
					if (c[i][j] != 30)
					{
						printf("%d ", c[i][j]);
					}
					else if (g[i][j] == 1)
					{
						printf("★");
					}
					else
					{
						printf("□");
					}
				}
			}
			printf("\n");
		}

		system("pause");
		return	0;

	}
	for (i = 1; i < lim; i++)
	{
		for (int j = 1; j < lim; j++)
		{
			if (i == s1 && j == s2 && g[i][j] == 0)
			{
				c[i][j] = g[i][j] + g[i + 1][j] + g[i - 1][j] + g[i][j + 1] + g[i][j - 1] + g[i + 1][j + 1] + g[i + 1][j - 1] + g[i - 1][j + 1] + g[i - 1][j - 1];//5
			}
			if (i == s1 && j == s2 && g[i + 1][j] == 0)
			{
				c[i + 1][j] = g[i + 1][j] + g[i + 1 + 1][j] + g[i - 1 + 1][j] + g[i + 1][j + 1] + g[i + 1][j - 1] + g[i + 1 + 1][j + 1] + g[i + 1 + 1][j - 1] + g[i - 1 + 1][j + 1] + g[i - 1 + 1][j - 1];//8
			}
			if (i == s1 && j == s2 && g[i - 1][j] == 0)
			{
				c[i - 1][j] = g[i - 1][j] + g[i + 1 - 1][j] + g[i - 1 - 1][j] + g[i - 1][j + 1] + g[i - 1][j - 1] + g[i + 1 - 1][j + 1] + g[i + 1 - 1][j - 1] + g[i - 1 - 1][j + 1] + g[i - 1 - 1][j - 1];//2
			}
			if (i == s1 && j == s2 && g[i][j + 1] == 0)
			{
				c[i][j + 1] = g[i][j + 1] + g[i + 1][j + 1] + g[i - 1][j + 1] + g[i][j + 1 + 1] + g[i][j - 1 + 1] + g[i + 1][j + 1 + 1] + g[i + 1][j - 1 + 1] + g[i - 1][j + 1 + 1] + g[i - 1][j - 1 + 1];//6
			}
			if (i == s1 && j == s2 && g[i][j - 1] == 0)
			{
				c[i][j - 1] = g[i][j - 1] + g[i + 1][j - 1] + g[i - 1][j - 1] + g[i][j + 1 - 1] + g[i][j - 1 - 1] + g[i + 1][j + 1 - 1] + g[i + 1][j - 1 - 1] + g[i - 1][j + 1 - 1] + g[i - 1][j - 1 - 1];//4
			}
			if (i == s1 && j == s2 && g[i + 1][j + 1] == 0)
			{
				c[i + 1][j + 1] = g[i + 1][j + 1] + g[i + 1 + 1][j + 1] + g[i - 1 + 1][j + 1] + g[i + 1][j + 1 + 1] + g[i + 1][j - 1 + 1] + g[i + 1 + 1][j + 1 + 1] + g[i + 1 + 1][j - 1 + 1] + g[i - 1 + 1][j + 1 + 1] + g[i - 1 + 1][j - 1 + 1];//9
			}
			if (i == s1 && j == s2 && g[i - 1][j + 1] == 0)
			{
				c[i - 1][j + 1] = g[i - 1][j + 1] + g[i + 1 - 1][j + 1] + g[i - 1 - 1][j + 1] + g[i - 1][j + 1 + 1] + g[i - 1][j - 1 + 1] + g[i + 1 - 1][j + 1 + 1] + g[i + 1 - 1][j - 1 + 1] + g[i - 1 - 1][j + 1 + 1] + g[i - 1 - 1][j - 1 + 1];//3
			}
			if (i == s1 && j == s2 && g[i + 1][j - 1] == 0)
			{
				c[i + 1][j - 1] = g[i + 1][j - 1] + g[i + 1 + 1][j - 1] + g[i - 1 + 1][j - 1] + g[i + 1][j + 1 - 1] + g[i + 1][j - 1 - 1] + g[i + 1 + 1][j + 1 - 1] + g[i + 1 + 1][j - 1 - 1] + g[i - 1 + 1][j + 1 - 1] + g[i - 1 + 1][j - 1 - 1];//7
			}
			if (i == s1 && j == s2 && g[i - 1][j - 1] == 0)
			{
				c[i - 1][j - 1] = g[i - 1][j - 1] + g[i + 1 - 1][j - 1] + g[i - 1 - 1][j - 1] + g[i - 1][j + 1 - 1] + g[i - 1][j - 1 - 1] + g[i + 1 - 1][j + 1 - 1] + g[i + 1 - 1][j - 1 - 1] + g[i - 1 - 1][j + 1 - 1] + g[i - 1 - 1][j - 1 - 1];//1
			}
		}
	}

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
				if (c[i][j] == 30)
				{
					printf("□");
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
				if (c[i][j] == 30)
				{
					printf("□");
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