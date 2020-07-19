/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: caidel <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/13 11:18:12 by caidel            #+#    #+#             */
/*   Updated: 2020/07/19 17:04:39 by caidel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int		ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

int		check_args(char *args)
{
	int i;
	int j;

	i = 0;
	if (args[0] == '\0' || args[1] == '-')
		return (0);
	while (args[i])
	{
		j = i + 1;
		if (args[i] == '+' || args[i] == '-')
			return (0);
		if (args[i] < 32 || args[i] > 126)
			return (0);
		while (args[j])
		{
			if (args[i] == args[j])
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}

void	ft_putnbr_base(int nbr, char *base)
{
	int i;
	int tbase;
	int res[50];

	i = 0;
	tbase = 0;
	if (check_args(base))
	{
		if (nbr < 0)
		{
			nbr *= -1;
			ft_putchar('-');
		}
		tbase = ft_strlen(base);
		while (nbr)
		{
			res[i] = nbr % tbase;
			nbr /= tbase;
			i++;
		}
		while (--i >= 0)
			ft_putchar(base[res[i]]);
	}
}
