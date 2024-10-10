/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_count_if.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ltayra-y <ltayra-y@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/09 18:55:03 by ltayra-y          #+#    #+#             */
/*   Updated: 2024/10/09 19:39:06 by ltayra-y         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_count_if(char **tab, int (*f)(char*))
{
	int	i;
	int	c;

	i = 0;
	c = 0;
	while (tab[i])
	{
		if ((*f)(tab[i]) == 1)
			c++;
		i++;
	}
	return (c);
}

int	ft_atoi(char *str)
{
	int	i;
	int	nb;
	int	sign;

	i = 0;
	nb = 0;
	sign = 1;
	if (str[i] == '+')
		i++;
	if (str[i] == '-')
	{
		sign *= -1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		nb = (str[i] - '0') + (nb * 10);
		i++;
	}
	return (sign * nb);
}

int	even(char *str)
{
	int	num;

	num = ft_atoi(str);
	if (num % 2 == 0)
		return (1);
	return (0);
}

#include <stdio.h>

int	main(void)
{
	char	*tab[] = {"1", "2", "3", NULL};
	int		count;

	count = ft_count_if(tab, even);
	printf("%i", count);
	return (0);
}
