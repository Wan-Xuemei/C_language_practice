#include <stdio.h>;
#include <stdlib.h>;


int main(void)
{
	/*int a = 2;
	printf("前: %d \n", a);
	scanf_s("%d", &a);
	printf("后: %d \n", a);*/

	int b = 1;
	int c = 4;
		printf("前： %d， %d \n", b, c);
		scanf_s("%d%d", &b, &c);
		printf("前： %d， %d \n", b, c);

	system("pause");
	return 0;
}