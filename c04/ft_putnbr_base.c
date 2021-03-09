/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: schetty <schetty@student.42kl.edu.my>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/01 22:22:22 by schetty           #+#    #+#             */
/*   Updated: 2021/03/01 22:22:22 by schetty          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int		ft_strcmp(int nb, char *base)
{
	unsigned int	i;
	char			*radix;

	i = 0;
	if (nb == 2)
		radix = "01";
	else if (nb == 8)
		radix = "poneyvif";
	else if (nb == 10)
		radix = "0123456789";
	else if (nb == 16)
		radix = "0123456789ABCDEF";
	else
		radix = "";
	while (1)
	{
		if (radix[i] == '\0' && base[i] == '\0')
			return (0);
		if (radix[i] != base[i])
			return ((unsigned char)radix[i] - (unsigned char)radix[i]);
		i++;
	}
}

int		check_base(char *base)
{
	int				i;
	int				j;

	i = 0;
	j = 0;
	while (base[i])
	{
		j = i + 1;
		while (base[j])
		{
			if (base[i] == base[j])
				return (0);
			j++;
		}
		i++;
	}
	return ((ft_strcmp(i, base) == 0 ? i : 0));
}

void	convert_nbr(unsigned int nb, char *base, int base_len)
{
	if (nb >= (unsigned int)base_len)
	{
		convert_nbr(nb / base_len, base, base_len);
		convert_nbr(nb % base_len, base, base_len);
	}
	else
	{
		ft_putchar(base[nb]);
	}
}

void	ft_putnbr_base(int nbr, char *base)
{
	int				base_len;
	unsigned int	nb;

	base_len = check_base(base);
	if (base_len > 1)
	{
		if (nbr < 0)
		{
			ft_putchar('-');
			nb = (nbr == -2147483648 ? 2147483648 : -nbr);
		}
		else
		{
			nb = nbr;
		}
		convert_nbr(nb, base, base_len);
	}
}
