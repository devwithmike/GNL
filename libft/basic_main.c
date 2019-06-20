#include "libft.h"
#include <stdio.h>

int main(void)
{
   int var1 = 'd';
	int var2 = '2';
	int var3 = '\t';
	int var4 = ' ';

	printf("====================================\n");
	printf("ATOI\n");
	printf("====================================\n");
	printf("The original: %d\n", atoi("      -1278637826378"));
	printf("Mine: %d\n", ft_atoi("      -1278637826378"));
	printf("\n====================================\n");
	printf("ISALNUM\n");
	printf("====================================\n");
    
	if( ft_isalnum(var1) ) {
		printf("var1 = |%c| is alphanumeric\n", var1 );
	} else {
		printf("var1 = |%c| is not alphanumeric\n", var1 );
	}
   
	if( ft_isalnum(var2) ) {
		printf("var2 = |%c| is alphanumeric\n", var2 );
	} else {
		printf("var2 = |%c| is not alphanumeric\n", var2 );
	}
   
	if( ft_isalnum(var3) ) {
		printf("var3 = |%c| is alphanumeric\n", var3 );
	} else {
		printf("var3 = |%c| is not alphanumeric\n", var3 );
	}
   
	if( ft_isalnum(var4) ) {
		printf("var4 = |%c| is alphanumeric\n", var4 );
	} else {
		printf("var4 = |%c| is not alphanumeric\n", var4 );
	}
	printf("\n====================================\n");
	printf("ISALPHA\n");
	printf("====================================\n");
   if( ft_isalpha(var1) ) {
      printf("var1 = |%c| is an alphabet\n", var1 );
   } else {
      printf("var1 = |%c| is not an alphabet\n", var1 );
   }
   
   if( ft_isalpha(var2) ) {
      printf("var2 = |%c| is an alphabet\n", var2 );
   } else {
      printf("var2 = |%c| is not an alphabet\n", var2 );
   }
   
   if( ft_isalpha(var3) ) {
      printf("var3 = |%c| is an alphabet\n", var3 );
   } else {
      printf("var3 = |%c| is not an alphabet\n", var3 );
   }
   
   if( ft_isalpha(var4) ) {
      printf("var4 = |%c| is an alphabet\n", var4 );
   } else {
      printf("var4 = |%c| is not an alphabet\n", var4 );
   }
	printf("\n====================================\n");
	printf("ISDIGIT\n");
	printf("====================================\n");
    
   if( ft_isdigit(var1) ) {
      printf("var1 = |%c| is a digit\n", var1 );
   } else {
      printf("var1 = |%c| is not a digit\n", var1 );
   }
   
   if( ft_isdigit(var2) ) {
      printf("var2 = |%c| is a digit\n", var2 );
   } else {
      printf("var2 = |%c| is not a digit\n", var2 );
   }
	printf("\n====================================\n");
	printf("ISPRINT\n");
	printf("====================================\n");

   if( ft_isprint(var1) ) {
      printf("var1 = |%c| can be printed\n", var1 );
   } else {
      printf("var1 = |%c| can't be printed\n", var1 );
   }

   if( ft_isprint(var2) ) {
      printf("var2 = |%c| can be printed\n", var2 );
   } else {
      printf("var2 = |%c| can't be printed\n", var2 );
   }

   if( ft_isprint(var3) ) {
      printf("var3 = |%c| can be printed\n", var3 );
   } else {
      printf("var3 = |%c| can't be printed\n", var3 );
   }

   if( ft_isprint(var4) ) {
      printf("var4 = |%c| can be printed\n", var4 );
   } else {
      printf("var4 = |%c| can't be printed\n", var4 );
   }

   printf("\n====================================\n");
	printf("ITOA\n");
	printf("====================================\n");
   printf("You have entered: %s\n", ft_itoa(374637734));
   printf("You have entered: %s\n", ft_itoa(-5968));

   printf("\n====================================\n");
	printf("TOLOWER\n");
	printf("====================================\n");

   int i = 0;
   char str[] = "WETHINKCODE";
	
   while( str[i] ) {
      ft_putchar(ft_tolower(str[i]));
      i++;
   }
   ft_putchar('\n');

   printf("\n====================================\n");
	printf("TOUPPER\n");
	printf("====================================\n");

   i = 0;
   char str2[] = "wethinkcode";
	
   while( str2[i] ) {
      ft_putchar(ft_toupper(str2[i]));
      i++;
   }

   ft_putchar('\n');

   printf("\n====================================\n");
	printf("BZERO\n");
	printf("====================================\n");

   void	*test;
	void	*compare;
	char	*input = "Helloworls";
	int		len = 4;
	int		alloc = 10;
	
	test = ft_memalloc(alloc);
	compare = ft_memalloc(alloc);

	memcpy(test, input, alloc);
	memcpy(compare, input, alloc);

	ft_bzero(test, len);
	bzero(compare, len);
	printf("memcmp: %d\n", memcmp(test, compare, alloc));

   return (0);
}
