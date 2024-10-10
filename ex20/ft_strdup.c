/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ltayra-y <ltayra-y@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/07 08:28:04 by ltayra-y          #+#    #+#             */
/*   Updated: 2024/10/07 09:53:59 by ltayra-y         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

char	*ft_strdup(char *src)
{
	char	*str;
	int		len;
	char	*dup;
	int		j;

	len = ft_strlen(src);
	dup = (char *)malloc(sizeof(char) * len + 1);
	if (dup == NULL)
		return (0);
	str = dup;
	j = 0;
	while (j < len)
	{
		str[j] = src[j];
		j++;
	}
	str[len] = '\0';
	return (dup);
}

// #include <stdio.h>

// int	main(void)
// {
// 	char	src[]="strdup";
// 	char	*duplicate = ft_strdup(src);
// 	int		len_src = ft_strlen(src);
// 	int		len_duplicate = ft_strlen(duplicate);

// 	if (duplicate != NULL)
// 	{
// 		printf("%s\n", duplicate);
// 		printf("%i\n", len_src);
// 		printf("%i\n", len_duplicate);
// 		free(duplicate);
// 	}
// 	return(0);
// }