#include<stdio.h>
#include<math.h>
int min(int a,int b)
{
	if (a < b) return a; else return b;
}

int main()
{
	int num, x, y, z1, z2, z3, z4;
	printf("enter number : ");
	scanf_s("%d", &num);
	printf("\n");
	for (y = num; y >= -num; y--)
	{
		for (x = -num; x <= num; x++)
		{
			z1 = num + x;
			z2 = num - x;
			z3 = num + y;
			z4 = num - y;
			printf("%d", min(min(z1, z2), min(z3, z4)) % 10);
		}
		printf("\n");
	}
	printf("\n");
	return 0;
}