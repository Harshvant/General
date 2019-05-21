#include <stdio.h>
main()
{
	int m, i;
	m = 1;
	while (m<=10)
	{
		i = 1;
		while (i<=10)
		{
			printf("%2d x %2d = %3d \n", i, m, i*m);
			i += 1;
		}
		printf("\n\n");
		m += 1;
	}
	getchar();
}