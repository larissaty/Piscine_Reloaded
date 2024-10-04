/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ltayra-y <ltayra-y@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/03 15:05:58 by ltayra-y          #+#    #+#             */
/*   Updated: 2024/10/03 15:11:31 by ltayra-y         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_factorial(int nb)
{
	if (nb == 0 || nb == 1)
		return (1);
	if (nb > 1 && nb <= 12)
		return (nb * ft_recursive_factorial(nb -1));
	return (0);
}

// #include <stdio.h>

// int	main(void)
// {
// 	printf("%i", ft_recursive_factorial(12));
// 	return (0);
// }
