/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svathuma <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/07 05:03:07 by svathuma          #+#    #+#             */
/*   Updated: 2021/03/07 05:07:22 by svathuma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

int	ft_fibonacci(int nb)
{
	if (nb < 0)
		return (-1);
	if (nb == 0)
	   return (0);
	if (nb == 1)
		return (1);
	else
	return (ft_fibonacci(nb-1) + ft_fibonacci(nb-2));
}

int main(void)
{
	printf("%d", ft_fibonacci(6));
}
