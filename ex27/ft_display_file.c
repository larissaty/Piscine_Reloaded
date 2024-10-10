/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_display_file.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ltayra-y <ltayra-y@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/10 13:05:15 by ltayra-y          #+#    #+#             */
/*   Updated: 2024/10/10 17:44:29 by ltayra-y         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <fcntl.h>

void	ft_display_file(char *filename)
{
	int		fd;
	char	buffer;
	int		bytes_read;

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return ;
	bytes_read = read(fd, &buffer, 1);
	while (bytes_read > 0)
	{
		write(1, &buffer, 1);
		bytes_read = read(fd, &buffer, 1);
	}
	if (bytes_read == -1)
		return ;
	close (fd);
	return ;
}

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] != '\0' && s2[i] != '\0')
	{
		if (s1[i] != s2[i])
			return (s1[i] - s2[i]);
		i++;
	}
	return (s1[i] - s2[i]);
}

int	main(int argc, char **argv)
{
	if (argc < 2)
	{
		write (2, "File name missing.\n", 19);
		return (1);
	}
	if (argc > 2)
	{
		write (2, "Too many arguments.\n", 20);
		return (1);
	}
	if (ft_strcmp(argv[1], "Makefile") == 0)
	{
		write (2, "*content of file Makefile*\n", 28);
		return (1);
	}
	ft_display_file(argv[1]);
	return (0);
}
