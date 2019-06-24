#include "./get_next_line.h"
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <stdio.h>

int		main(int argc, char **argv)
{
	int fd1;
	int fd2;
	char *line;

	if (argc < 3)
		return (0);
////////////////////////////////////////
	fd1 = open(argv[1], O_RDONLY);
	if (fd1 == -1)
	{
		ft_putendl("File not found");
		return (0);
	}
	fd2 = open(argv[2], O_RDONLY);
	if (fd2 == -1)
	{
		ft_putendl("File not found");
		return (0);
	}
////////////////////////////////////////
	while (get_next_line(fd1, &line) > 0)
	{
		ft_putstr(line);
		ft_putchar('\n');
		free(line);
	}
	ft_putchar('\n');
	ft_putendl("//////////////////////////////////////////////////////////////////////////////////////");
	ft_putchar('\n');
	while (get_next_line(fd2, &line) > 0)
	{
		ft_putstr(line);
		ft_putchar('\n');
		free(line);
	}
////////////////////////////////////////
	if (close(fd1) == -1)
			return (0);
	if (close(fd2) == -1)
			return (0);
	return (0);
}
