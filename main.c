#include "libasm.h"
#include <string.h>

int     main()
{   
    char    *line1;
	char	*duplicate;
	int		bytes;
	char	*line2;
	int		fd;
	char	*zer = "";

	if (!(line1 = (char*)malloc(100)))
    {
      ft_write(1, "malloc error\n", 13);
		return (0);
	}
	fd = open("c", O_RDONLY);
    printf("Let's read a string from file C (it will be ret by ft_read)\n");
	read(4, line1, 15);
	printf("real error is %i\n", errno);
	ft_read(4, line1, 15);
	printf("my error is %i\n", errno);
	

	if ((bytes = ft_read(fd, line1, 15)) < 0)
	{
        ft_write(1, "read error\n", 11);
		return (0);
	}
	printf("ft_strlen is %i\n", (int)ft_strlen(line1));
	printf("strlen is %i\n", (int)strlen(line1));
	line1[bytes] = 0x0;
	printf("%s\n", line1);
	printf("this is your duplicated string (printed by ft_write)\n");
	duplicate = strdup(zer);
	printf("|%s|\n", duplicate);
	if (!(duplicate = ft_strdup(zer)))
	{
      ft_write(1, "malloc error\n", 13);
		return (0);
	}
	printf("|%s|\n", duplicate);
	ft_write(1, duplicate, ft_strlen(duplicate));
	ft_write(1, "\n", 1);
	printf("your line1 has %i symbols (measured by ft_strlen)\n", (int)ft_strlen(line1));
	printf("Please, give me another string (it will be ret by ft_read)\n");
	if (!(line2 = (char*)malloc(100)))
   {
     ft_write(1, "malloc error\n", 13);
		return (0);
	}
	if ((bytes = ft_read(0, line2, 100)) < 0)
	{
        ft_write(1, "read error\n", 11);
		return (0);
	}
	line2[bytes] = 0x0;
	printf("let's compare line1 and line2. Result is %i\n", ft_strcmp("abc", duplicate));
	printf("and the real comparing is %i\n", strcmp("abc", duplicate));
	printf("now let's copy line2 to line1 and print out line1 by ft_write\n");
	ft_strcpy(line1, line2);
	ft_write(1, line1, ft_strlen(line1));
	return (0);
}
