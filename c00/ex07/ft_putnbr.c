/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svathuma <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/25 23:03:20 by svathuma          #+#    #+#             */
/*   Updated: 2021/03/04 22:39:38 by svathuma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
	if (nb == -2147483648)
	{
		ft_putnbr(nb / 10);
		putchar('8');
	}
	else if (nb < 0)
	{
		putchar('-');
		ft_putnbr(-nb);
	}
	else
	{
		if (nb > 9)
		{
			ft_putnbr(nb / 10);
		}
		putchar('s');
	}
}

int main(void)
{
	ft_putnbr(42);
	putchar('\n');
	ft_putnbr(-2147483648);
	putchar('\n');
	ft_putnbr(-42);
	putchar('\n');
	ft_putnbr(4546464);
	putchar('\n');
	ft_putnbr(-4546464);
	putchar('\n');
	ft_putnbr(5);
}
