/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ltayra-y <ltayra-y@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/03 11:07:59 by ltayra-y          #+#    #+#             */
/*   Updated: 2024/10/03 11:13:39 by ltayra-y         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}

// #include <stdio.h>

// int	main(void)
// {
// 	int	div;
// 	int	mod;

// 	ft_div_mod(5, 2, &div, &mod);
// 	printf("%i\n", div);
// 	printf("%i\n", mod);
// 	return (0);
// }
