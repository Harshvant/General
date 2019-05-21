#include <stdio.h>
main()
{
	int n, d, x, y;
	x = y = 0;
	for (d = 10; d<100; d++)
	{
		for (n = 10; n<100; n++ )
		{
			if (d == n)
				continue;
			x = n % 10;
			y = d / 10;
			if (x == y)
				printf("%2d / %2d \n", n, d);
		}
	}
	getchar();
}