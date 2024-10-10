/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ltayra-y <ltayra-y@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/07 09:40:41 by ltayra-y          #+#    #+#             */
/*   Updated: 2024/10/07 14:23:06 by ltayra-y         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	*array;
	int	*ptr;
	int	size;
	int	value;

	size = (max - min) + 1;
	array = (int *)malloc(sizeof(int) * size);
	if (min >= max)
		return (0);
	ptr = array;
	value = min;
	while (value <= max)
	{
		*ptr = value;
		ptr++;
		value++;
	}
	return (array);
}

// #include <stdio.h>

// int	main(void)
// {
// 	int	*arr;
// 	int	i;
// 	int	min;
// 	int	max;

// 	min = -1;
// 	max = 3;
// 	arr = ft_range(min, max);
// 	if (arr == NULL)
// 		return (1);
// 	i = 0;
// 	while (i <= (max - min))
// 	{
// 		printf("%d ", arr[i]);
// 		i++;
// 	}
// 	printf("\n");
//	free(array);
// 	return (0);
// }
