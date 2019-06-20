#include "libft.h"
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int		main(void)
{
	int i;

	t_list *list;
	t_list *link;

	list = ft_lstnew("Hello World", 0);
	for (i = 1; i < 16; i++)
	{
		link = ft_lstnew("Hello World", i);
		ft_lstadd(&list, link);
	}
	while (list)
	{
		printf("%s-%d\n", list->content, i);
		list = list->next;
		i--;
	}
	return (0);
}
