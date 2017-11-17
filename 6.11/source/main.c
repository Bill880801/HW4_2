#include<stdio.h>
#include<stdlib.h>
#define SIZE 10

int main(void)
{
	int a[SIZE] = { 2, 6, 4, 8, 10, 12, 89, 68, 45, 37};
	int b[SIZE] = { 2, 6, 4, 8, 10, 12, 89, 68, 45, 37};
	int c[SIZE] = { 2, 6, 4, 8, 10, 12, 89, 68, 45, 37};
	int pass;
	int i;
	int hold;
	int counter = 0;
	int time_a = 0, time_b = 0, time_c = 0;
	int k = 0;												//第k回合

	//原始
	printf("\n\n(原始的氣泡)\n\n");
	printf("Data items is origine order\n");

	for (i = 0; i < SIZE; i++)
	{
		printf("%4d", a[i]);
	}

	for (pass = 1; pass < SIZE; pass++)
	{
		for (i = 0; i < SIZE - 1; i++)
		{
			if (a[i]>a[i + 1])
			{
				hold = a[i];
				a[i] = a[i + 1];
				a[i + 1] = hold;
			}
			time_a++;
		}
	}
	printf("\nData items is ascendind order\n");
	for (i = 0; i < SIZE; i++){
		printf("%4d",a[i]);
	}
	
	//題目(a)
	printf("\n\n題目(a)\n\n");
	printf("Data items is origine order\n");

	for (i = 0; i < SIZE; i++)
	{
		printf("%4d", b[i]);
	}

	for (pass = 1; pass < SIZE; pass++)
	{
		for (i = 0; i < SIZE - 1 - k; i++)
		{
			if (b[i]>b[i + 1])
			{
				hold = b[i];
				b[i] = b[i + 1];
				b[i + 1] = hold;
			}
			time_b++;
		}
		k += 1;
	}
	printf("\nData items is ascendind order\n");
	for (i = 0; i < SIZE; i++){
		printf("%4d", b[i]);
	}

	//題目(b)
	
	printf("\n\n題目(b)\n\n");
	printf("Data items is origine order\n");

	for (i = 0; i < SIZE; i++)
	{
		printf("%4d", c[i]);
	}

	for (pass = 1; pass < SIZE; pass++)
	{
		counter= 0;
		for (i = 0; i < SIZE - 1; i++)
		{
			if (c[i]>c[i + 1]){
				hold = c[i];
				c[i] = c[i + 1];
				c[i + 1] = hold;
			}
			else
			{
				counter++;
			}
			time_c++;
		}
		if (counter == SIZE - 1)
		{
			break;
		}
	}
	printf("\nData items is ascendind order\n");
	for (i = 0; i < SIZE; i++)
	{
		printf("%4d", c[i]);
	}

	printf("\n\n原始的氣泡共比較了%d次，(a)共比較了%d次，(b)共比較了%d次\n",time_a, time_b, time_c);
	system("pause");
	return 0;
}
