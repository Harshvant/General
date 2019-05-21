#include <stdio.h>
main()
{
	int a, b, c;
	a = 0;
	b = 1;
	printf("%d \n%d \n", a, b);
	while (1)
	{
		c = a + b;
		a = b;
		b = c;
		printf("%d \n", c);
		if (c > 99999999)
			break;
	}
	printf("Press any key to continue...\n");
	getchar();
}