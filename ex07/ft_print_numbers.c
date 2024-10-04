/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ltayra-y <ltayra-y@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/02 14:11:45 by ltayra-y          #+#    #+#             */
/*   Updated: 2024/10/02 18:51:48 by ltayra-y         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_print_numbers(void)
{
	char	n;

	n = '0';
	while (n <= '9')
	{
		ft_putchar(n);
		n++;
	}
}

// int	main(void)
// {
// 	ft_print_numbers();
// 	return (0);
// }
