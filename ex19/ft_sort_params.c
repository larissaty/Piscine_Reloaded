/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ltayra-y <ltayra-y@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/04 15:19:55 by ltayra-y          #+#    #+#             */
/*   Updated: 2024/10/04 17:21:58 by ltayra-y         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i] != 0)
	{
		ft_putchar(str[i]);
		i++;
	}
}

void	sort_str(int argc, char **argv)
{
	int		a;
	int		i;
	int		j;
	char	*value;

	a = 0;
	while (a < argc - 1)
	{
		i = 1;
		while (i < argc - 1 - a)
		{
			j = 0;
			while (argv[i][j] == argv[i + 1][j] && argv[i][j] != '\0')
				j++;
			if (argv[i][j] > argv[i + 1][j])
			{
				value = argv[i];
				argv[i] = argv[i + 1];
				argv[i + 1] = value;
			}
			i++;
		}
		a++;
	}
}

int	main(int argc, char **argv)
{
	int	b;

	if (argc < 2)
		return (0);
	sort_str(argc, argv);
	b = 1;
	while (b < argc)
	{
		ft_putstr(argv[b]);
		ft_putchar('\n');
		b++;
	}
	return (0);
}
