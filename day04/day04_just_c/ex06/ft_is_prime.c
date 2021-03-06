/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dkolev <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/17 13:51:32 by dkolev            #+#    #+#             */
/*   Updated: 2018/02/18 15:22:23 by dkolev           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_is_prime(int nb)
{
	int i;
	int flag;

	i = 2;
	flag = 0;
	if (nb <= 1)
		return (0);
	while (i <= nb / 2)
	{
		if ((nb % i) == 0)
		{
			flag = 1;
			break ;
		}
		i++;
	}
	if (flag == 0)
		return (1);
	else
		return (0);
}
