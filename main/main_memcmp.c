#include	"libft.h"

int main() {

    int array1 [] = { 48, 49, 50, 51, 52 };
    int array2 [] = { 48, 49, 97, 98, 99 };
    size_t size = 10;

    printf("o: %d\n", memcmp( array1, array2, size));
	printf("ft: %d\n", ft_memcmp( array1, array2, size));
    printf("o: %d\n", memcmp(array1, array1, size));
	printf("ft: %d\n", ft_memcmp(array1, array1, size));
    printf("o: %d\n", memcmp( array2, array1, size));
	printf("ft: %d\n", ft_memcmp( array2, array1, size));

    return 0;
}
