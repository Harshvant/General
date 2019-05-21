#include <stdio.h>
main()
{
	int i, x, y, z;
	x = 0;
	y = 0;
	z = 0;
	i = 1000;
	while (i < 10000)
	{
		x = i / 100;
		y = i % 100;
		z = x + y;
		if (i == z * z)
			printf("%d \n", i);
		i = i + 1;
	}
	printf("Press any key to continue...\n");
	getchar();

}