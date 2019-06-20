#include "libft.h"
#include <stdio.h>

int main(void)
{

    printf("====================================\n");
	printf("MEMALLOC && MEMDEL\n");
	printf("====================================\n");
    size_t	size = 15;
	char	*res;
	size_t		cnt;

	res = (char *)ft_memalloc(size);
	cnt = 0;
	while (cnt < size)
	{
		if (res[cnt] != 0)
			printf("Not init 0\n");
		cnt++;
	}
	ft_memdel((void **)&res);
	if (res != NULL)
		printf("res not null after delete\n");

    printf("====================================\n");
	printf("MEMCCPY\n");
	printf("====================================\n");
    void	*test1;
	void	*compare1;
	char	*input1 = "Helloworls";
	void	*result1;
	char	c1 = 'l';
	int		alloc1 = 10;
	
	test1 = ft_memalloc(alloc1);
	compare1 = ft_memalloc(alloc1);

	result1 = ft_memccpy(test1, input1, c1, alloc1);
	if ((result1 < &test1[0] || result1 > &test1[alloc1]) && result1)
		printf("output not pointer to part of test or null");
	memccpy(compare1, input1, c1, alloc1);

	printf("memcmp:%d\n", memcmp(test1, compare1, alloc1));

    printf("====================================\n");
	printf("MEMCHR\n");
	printf("====================================\n");

    char	*test2;
	char	*compare2;
	char	*input2 = "Helloworls";
	char	*res2;
	int		len2 = 8;
	int		alloc2 = 10;
	char	c2 = 'l';
	
	test2 = ft_memalloc(alloc2);
	compare2 = ft_memalloc(alloc2);

	ft_memcpy(test2, input2, alloc2);
	memcpy(compare2, input2, alloc2);

	res2 = ft_memchr(test2, c2, len2);

	if (test2 <= res2 && res2 >= &test2[alloc2] && res2 != NULL)
		printf("output pointer not within input string\n");
	printf("%s\n", res2);
	printf("%s\n", memchr(compare2, c2, len2));

    printf("====================================\n");
	printf("MEMCMP\n");
	printf("====================================\n");

    char	*input3 = "Helloworls";
	char	*cmp3 = "HelloOtherstring";
	size_t		len3 = 14;

	printf("%d\n", ft_memcmp(input3, cmp3, len3));
	printf("%d\n", memcmp(input3, cmp3, len3));

    printf("====================================\n");
	printf("MEMCPY\n");
	printf("====================================\n");

    void	*test4;
	void	*compare4;
	char	*input4 = "Helloworls";
	int		alloc4 = 10;
	
	test4 = ft_memalloc(alloc4);
	compare4 = ft_memalloc(alloc4);

	if (test4 != ft_memcpy(test4, input4, alloc4))
		printf("output not input\n");
	memcpy(compare4, input4, alloc4);

	printf("memcmp:%d\n", memcmp(test4, compare4, alloc4));

    printf("====================================\n");
	printf("MEMMOVE\n");
	printf("====================================\n");

    void	*test5;
	void	*compare5;
	char	*input5 = "Helloworls";
	int		len5 = 8;
	int		alloc5 = 10;
	
	test5 = ft_memalloc(alloc5);
	compare5 = ft_memalloc(alloc5);

	ft_memcpy(test5, input5, alloc5);
	memcpy(compare5, input5, alloc5);

	if (test5 != ft_memmove(&test5[3], test5, len5))
		printf("output pointer doesnt match input\n");
	memmove(&compare5[3], compare5, len5);
	printf("%s\n", test5);
	printf("%s\n", compare5);

	ft_memcpy(test5, input5, alloc5);
	memcpy(compare5, input5, alloc5);

	if (test5 != ft_memmove(test5, &test5[3], len5))
		printf("output pointer doesnt match input\n");
	memmove(compare5, &compare5[3], len5);
	printf("%s\n", test5);
	printf("%s\n", compare5);

    printf("====================================\n");
	printf("MEMSET\n");
	printf("====================================\n");

    void	*test6;
	void	*compare6;
	char	*input6 = "Helloworls";
	int		len6 = 8;
	int		alloc6 = 10;
	
	test6 = ft_memalloc(alloc6);
	compare6 = ft_memalloc(alloc6);

	memcpy(test6, input6, alloc6);
	memcpy(compare6, input6, alloc6);

	if (test6 != ft_memset(test6, 'c', len6))
		printf("output pointer doesnt match input\n");
	memset(compare6, 'c', len6);
	printf("%s\n", test6);
	printf("%s\n", compare6);

	return (0);
}
