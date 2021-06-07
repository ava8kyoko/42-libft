#include "libft.h"

/*
void	ft_bzero(void *str, size_t len_tofill)
{
	unsigned char	*new_str;

	new_str = str;
	printf("%s\n", new_str);
	while (len_tofill--)
		{
			*new_str++ = 0;
			printf("%s\n", new_str);	
		}
		
}
*/

int		main(void)
{
	printf("======= Test bzero =======\n");

	//test 1
	char	*temoin1 = strdup("bonjour");
	char	*str_test1 = strdup("bonjour");
	bzero(temoin1, 3);
	ft_bzero(str_test1, 3);
	printf("memcmp bzero 1 : %d\n", memcmp(temoin1, str_test1, 7));

	//test 2
	char	*temoin2 = strdup("yolo");
	char	*str_test2 = strdup("yolo");
	bzero(temoin2, 0);
	ft_bzero(str_test2, 0);
	printf("memcmp bzero 2 : %d\n", memcmp(temoin2, str_test2, 4));

	//test 3
	char	*temoin3 = strdup("bon");
	char	*str_test3 = strdup("bon");
	bzero(temoin3, 4);
	ft_bzero(str_test3, 4);
	printf("memcmp bzero 3 : %d\n", memcmp(temoin3, str_test3, 4));
	putchar('\n');

	return (0);
}