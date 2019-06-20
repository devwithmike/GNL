#include "libft.h"
#include <stdio.h>

int main(void)
{
    printf("\n====================================\n");
	printf("STRCAT && STRCPY\n");
	printf("====================================\n");
    char src[50], dest[50];

    ft_strcpy(src,  "This is source");
    ft_strcpy(dest, "This is destination");

    ft_strcat(dest, src);

    printf("Final destination string : |%s|", dest);

    printf("\n====================================\n");
	printf("STRCHR\n");
	printf("====================================\n");
    const char str[] = "https://profile.intra.42.fr/";
    const char ch = '.';
    char *ret;

    ret = ft_strchr(str, ch);

    printf("String after |%c| is - |%s|\n", ch, ret);

    printf("\n====================================\n");
	printf("STRSTR\n");
	printf("====================================\n");
    const char haystack[20] = "WeThinkCode";
    const char needle[10] = "";
    char *ret2;

    ret2 = ft_strstr(haystack, needle);

    printf("The substring is: %s\n", ret2);

    printf("\n====================================\n");
	printf("STRCMP && STREQU\n");
	printf("====================================\n");

    char str1[15];
    char str2[15];
    char str3[15];
    int ret3;
    int ret4;

    ft_strcpy(str1, "abcdef");
    ft_strcpy(str2, "ABCDEF");
    ft_strcpy(str3, "abcdef");

    ret3 = ft_strcmp(str1, str2);
    ret4 = ft_strequ(str1, str3);

    if(ret3 < 0) {
        printf("\nstr1 is less than str2");
    } else if(ret3 > 0) {
        printf("\nstr2 is less than str1");
    } else {
        printf("\nstr1 is equal to str2");
    }
    if (ret4 == 0) {
        printf("\nThey are equal");
    } else {
        printf("\nThey are not equal");
    }

    printf("\n====================================\n");
	printf("STRDUP\n");
	printf("====================================\n");

    char *str9 = "Helloworld";
    char *result;
    result = ft_strdup(str9);
    printf("The string : %s\n", result);

    printf("\n====================================\n");
	printf("STRJOIN\n");
	printf("====================================\n");

    char *first = "First";
    char *second = "Second";
    char *last;

    last = ft_strjoin(first, second);
    printf("%s\n", last);

    printf("\n====================================\n");
	printf("STRLEN\n");
	printf("====================================\n");

    printf("%d\n", (int)ft_strlen("Hello"));

    printf("\n====================================\n");
	printf("STRREV\n");
	printf("====================================\n");
    char s1[] = "HELLO";    // String Given
    char *s2;
    s2 = ft_strrev(s1);
    printf("%s\n", s2);
    
    printf("\n====================================\n");
	printf("STRSPLIT\n");
	printf("====================================\n");
    int i = 0;

    char **arr = ft_strsplit("lorem ipsum dolor sit amet, consectetur adipiscing elit. Sed non risus. Suspendisse", ' ');
	while (arr[i] != '\0')
	{
		ft_putendl(arr[i]);
		i++;
	}

    printf("\n====================================\n");
	printf("STRTRIM\n");
	printf("====================================\n");
    char *arr2 = ft_strtrim("    lorem ipsum dolor sit amet, consectetur adipiscing elit. Sed non risus. Suspendisse         ");
    printf("%s\n", arr2);

    return (0);
}
