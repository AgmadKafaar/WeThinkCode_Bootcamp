/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dkolev <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/21 11:10:27 by dkolev            #+#    #+#             */
/*   Updated: 2018/02/22 15:35:03 by dkolev           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

char	*ft_strdup(char *src)
{
	char	*dest;
	int		len;
	int		j;

	j = 0;
	len = 0;
	while (src[j] != '\0')
	{
		len++;
		j++;
	}
	dest = (char*)malloc(sizeof(*dest) * (len + 1));
	j = 0;
	while (j < len)
	{
		dest[j] = src[j];
		j++;
	}
	dest[j] = '\0';
	return (dest);
}

int		main(void)
{
	//int j;
	//char *check;

	char string[] = "String";
	printf("%s\n", ft_strdup(string));
	//check = ft_strdup(string);
	//j = 0;
	//while (check[j] != '\0')
	//{
	//	printf("%c\n", check[j]);
	//	j++;
	//}
	return (0);
}
