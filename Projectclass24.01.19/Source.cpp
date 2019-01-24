#include <iostream>
#include <stdio.h>
#include <locale.h>
#include <time.h>


//1
void task1()
{
	int a[2][3] = { }, sum = 0;
	for (size_t i = 0; i < 2; i++)
	{
		for (size_t j = 0; j < 3; j++)
		{
			a[i][j] = rand() % 50;
			printf("%d\n", a[i][j]);
		
		}
		
	}
	for (size_t i = 0; i < 3; i++)
	{
		sum *= a[0][i];
	}
	printf("%d\n", sum);
}

//3
void task2()
{
	int x[5][5] = { 0 }, sum = 0, min = 100;
	for (size_t i = 0; i < 5; i++)
	{
		for (size_t j = 0; j < 5; j++)
		{
			x[i][j] = rand() % 50;
			printf("%d\n", x[i][j]);
		}
	}
	for (size_t i = 0; i < 5; i++)
	{
		for (size_t j = 0; j < 5; j++)
		{
			sum += x[i][j];
			
		}
		if (sum < min)
		{
			min = sum;
			
		}
		
	}
	printf("min = %d\n", sum);
}




//4
void task3()
{
	const int n = 5;
   int a[n][n] = { 0 };

   for (size_t i = 0; i < n; i++)
   {
	   for (size_t j = 0; j < n; j++)
	   {
		   a[i][j] = -5 + rand() % 20;
		   printf("%d\t", a[i][j]);
	   }

	   printf("\n");
   }
		//сортировка пузырьком
		//сортировка двумерного массива
	for (int k = 0; k < n; k++)
	{
		for (int r = 0; r < n; r++)
		{
			for (int i = 0; i < n; i++)
			{
				for (int j = 0; j < n; j++)
				{
					if (a[i][j] > a[k][r])
					{
						int tmp = a[i][j];
						a[i][j] = a[k][r];
						a[k][r] = tmp;
					
					}
				}

			}
		}

	}



}


//5
void task4()
{
	const int n = 5;
	int a[n][n] = { 0 }, x = 0;

	for (size_t i = 0; i < n; i++)
	{
		for (size_t j = 0; j < n - 1; j++)
		{
			if (a[0][j]==a[i][j+1])
			{
				x++;

			}
			
		}
		if (x == 2)
		{
			
			for (size_t j = 0; j < n; j++)
			{
				a[i][j] = 0;
				
			}
		}
		x = 0;

	}
	for (size_t i = 0; i < n; i++)
	{
		for (size_t j = 0; j < n; j++)
		{
			printf("%d\n", a[i][j]);
		}

	}


}


//6 или 7
void task5()
{
	const int n = 5;
	int a[n][n] = { }, min = 0;
	for (size_t i = 0; i < n; i++)
	{
		for (size_t j = 0; j < n; j++)
		{
			a[i][j] = rand() % 50;
			printf("%d\n", a[i][j]);

		}

	}
	for (size_t i = 0; i < n; i++)
	{
		for (size_t j = 0; j < n; j++)
		{
			if (a[i][j]<min)
			{
				min = a[i][j];
			}

			
		}
	
		printf(" min = %d\n", min);
			if (a[i][i] == min)
			{
				for (size_t j = 0; j < n; j++)
				{
					a[i][j] = 0;
				}
			}
			min = 100;
		
	}
	for (size_t i = 0; i < n; i++)
	{
		for (size_t j = 0; j < n; j++)
		{
			printf("a[i][j] = %d\n", a[i][j]);
		}
	}
}

//8
void task6()
{
	const int n = 5;
	int a[n][n] = { }, s = 0, x = 0;
	for (size_t i = 0; i < n; i++)
	{
		for (size_t j = 0; j < n; j++)
		{
			
			a[i][j] = rand() % 50;
			printf("%d\n", a[i][j]);

		}

	}
	for (size_t i = 0; i < n; i++)
	{
		for (size_t j = 0; j < n; j++)
		{
			if (a[i][j]==n)
			{
				x++;
			}

		}

	}
	printf("%d\n", x);

}














int main()
{
	srand(time(NULL) + rand());
	setlocale(LC_ALL, "");
	int task = 0;
	int restart = 0;

	do
	{
		printf("-------------------------------------------------------------------------------\n");
		printf("Введите номер задания\n");
		printf("-------------------------------------------------------------------------------\n");
		scanf_s("%d", &task);

		switch (task)
		{
		case 1:
		{
			task1();
		}break;
		case 2:
		{
			task2();
		}break;
		case 3:
		{
			task3();
		}break;
		case 4:
		{
			task4();
		}break;

		}


		printf("-------------------------------------------------------------------------------\n");
		printf("Хотите продолжить 1/0\n");
		printf("-------------------------------------------------------------------------------\n");
		scanf_s("%d", &restart);
	} while (restart = 1);

}