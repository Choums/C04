/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: caidel <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/08 20:01:53 by caidel            #+#    #+#             */
/*   Updated: 2020/07/10 16:12:04 by caidel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_stoi(char *str)
{
	int res;
	int sign;
	int i;

	res = 0;
	sign = -1;
	i = 0;

	/*
	 * Reste a prendre en compte les whitespaces
	 * la compo des 10 chiffres
	 *
	 * */

	while (str[i])
	{
		res = res*10 + str[i] - '0';
		i++;
	}
	return (sign*res);
}
