/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: caidel <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/08 19:38:42 by caidel            #+#    #+#             */
/*   Updated: 2020/07/08 19:42:28 by caidel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	int nbr;
	int i;

	i = 0;
	nbr = 0;
	while (str[i])
	{
		nbr++;
		i++;
	}
	return (nbr);
}