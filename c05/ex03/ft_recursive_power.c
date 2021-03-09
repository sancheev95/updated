/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svathuma <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/07 04:57:31 by svathuma          #+#    #+#             */
/*   Updated: 2021/03/07 05:02:14 by svathuma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
int	ft_recursive_power(int nb, int power)
{
	if (power == 1)
		return (1);
	else
		return (nb * ft_recursive_power(nb, power - 1));
}

int main(void)
{
	printf("%d", ft_recursive_power(10, 3));
}
