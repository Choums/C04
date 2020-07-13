/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: caidel <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/13 11:18:12 by caidel            #+#    #+#             */
/*   Updated: 2020/07/13 12:49:50 by caidel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	is_double_true(char *str)
{
	int i;
	int j;

	i = 1;
	while (str)
	{
		j = 0;
		while (str[i] != str[j])
		{
			if (str[j] == str[i])
				return (1);
			j++;
		}
		i++;
	}
	return (0);
}

void	ft_putnbr_base(int nbr, char *base)
{

}

int check_args(char *str)
{
	while (str)
	{
		if (str <= 1)
			return (1);
		if (str == '+' || str == '-')
			return (1);
		if (is_double_true)
			return (1);
	}
	return (0);
}

int	main(int argc, char *argv[])
{
	if (!(check_args(argv[2])));
	{
		printf("Error\n");
		return (1);
	}
	return 0;
}
