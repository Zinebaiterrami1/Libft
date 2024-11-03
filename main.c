#include "libft.h"

int	main()
{
	char *str;
	int nb = -9;
	str = ft_itoa(nb);
	printf("results : %s", str);
	free(str);
}