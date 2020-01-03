#include<stdio.h>
#include<stdlib.h>
#define lim 11 

int g[lim][lim];
int i, j, a, b, m, t1, t2, at, f = 0, k;
int c[lim][lim];
int s1, s2;

void fix();
void win();
void lose();

int main(void)
{	
	for (i = 1; i < lim; i++)
	{
		for (j = 1; j < lim; j++)
		{
			g[i][j] = 0;
		}
	}

	printf("How much Mine do you want？(1-10)：");
	scanf_s("%d", &m);

	for (i = 1; i < lim; i++)
	{
		for (j = 1; j < lim; j++)
		{
			c[i][j] = 30;
		}
	}
	srand(time(NULL));

	//printf("輸入地雷數 %d\n", m);

	for (i = 0; i < m; i++)
	{	
		a = 1+rand() % 10;
		b = 1+rand() % 10;
		g[a][b] =  1 ;
	}
	for (i = 1; i < lim; i++)
	{
		for (j = 1; j < lim; j++)
		{
			t1 += g[i][j];
		}
	}

	//printf("實際地雷數 %d\n", t1);
	
	do 
	{
		fix();
	} while (t2 != m);

	//printf("修改後地雷數 %d\n", t2);


	//for (i = 1; i < lim; i++)
	//{
		//for (int j = 1; j < lim; j++)
		//{
		//	printf("%d ", g[i][j]);	
		//}
		//printf("\n");
	//}

	printf("\n");
		
		for (i = 1; i < lim; i++)
		{
			for (j = 1; j < lim; j++)
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
			
	do
	{		
		k = 0;

		for (i = 1; i < lim; i++)
		{
			for (int j = 1; j < lim; j++)
			{
				if (c[i][j] == 30)
				{
					k++;
				}
			}
		}

		if (k == m)
		{
			win(g,c);
			system("pause");
			return 0;
		}
		else
		{	
			lose(g,c);
		}
	} while (g[s1][s2] == 0);

	system("pause");
	return 0;

}

void fix()
{
	if (f == 0)
	{
		at = 0;
		at = m - t1;
		for (i = 0; i < at; i++)
		{
			a = 1 + rand() % 10;
			b = 1 + rand() % 10;
			g[a][b] = 1;
		}

		for (i = 1; i < lim; i++)
		{
			for (j = 1; j < lim; j++)
			{
				t2 += g[i][j];
			}
		}
	}

	else
	{
		at = 0;
		at = m - t2;
		for (i = 0; i < at; i++)
		{
			a = 1 + rand() % 10;
			b = 1 + rand() % 10;
			g[a][b] = 1;
		}

		for (i = 1; i < lim; i++)
		{
			for (j = 1; j < lim; j++)
			{
				t2 += g[i][j];
			}
		}
	}
	f++;
}