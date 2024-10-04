/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ltayra-y <ltayra-y@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/03 13:25:25 by ltayra-y          #+#    #+#             */
/*   Updated: 2024/10/03 16:45:16 by ltayra-y         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	f;

	f = 1;
	if (nb == 0)
		return (1);
	if (nb < 1 || nb > 12)
		return (0);
	while (nb > 1)
	{
		f *= nb;
		nb--;
	}
	return (f);
}

// #include <stdio.h>

// int	main(void)
// {
// 	printf("%i", ft_iterative_factorial(13));
// 	return (0);
// }
