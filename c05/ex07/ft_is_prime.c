/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svathuma <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/07 06:44:51 by svathuma          #+#    #+#             */
/*   Updated: 2021/03/07 07:09:24 by svathuma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_prime(int nb)
{
	int i;
	int	check;

	check = 0;
	i = 2;
	while (i <= nb / 2)
	{
		if (nb % i == 0)
		{
			check = 1;
			break ;
		}
		i++;
	}
	if (nb == 1)
	{
		return (0);
	}
	else
	{
		if (check == 0)
			return (nb);
		else
			return (0);
	}
}

int	ft_find_next_prime(int nb)
{
	if (nb < 3)
		return (2);
	if (nb % 2 == 0)
		nb++;
	while (ft_is_prime(nb) == 0)
	{
		nb = nb + 2;
	}
	return (nb);
}
