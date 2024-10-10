/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_foreach.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ltayra-y <ltayra-y@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/09 18:20:59 by ltayra-y          #+#    #+#             */
/*   Updated: 2024/10/09 18:44:07 by ltayra-y         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_foreach(int *tab, int length, void (*f)(int))
{
	int	i;

	i = 0;
	while (i < length)
	{
		(*f)(tab[i]);
		i++;
	}
}

// #include <stdio.h>

// void	f_double(int a)
// {
// 	int	doub;

// 	doub = 2 * a;
// 	printf("%d\n", doub);
// }

// int	main(void)
// {
// 	int	tab[] = {1, 2, 3};

// 	ft_foreach(tab, 3, &f_double);
// 	return (0);
// }
