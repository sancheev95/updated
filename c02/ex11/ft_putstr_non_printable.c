/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svathuma <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/03 18:11:32 by svathuma          #+#    #+#             */
/*   Updated: 2021/03/05 01:33:10 by svathuma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	putchar(char c)
{
	write(1, &c, 1);
}

void	printhexa(char c)
{
	char	hex1;
	char	hex2;
	int		negative;

	if (c < 0)
	{
		negative = (-128 - (c)) * -1 + 128;
		hex1 = negative / 16;
		hex2 = negative % 16;
	}
	else
	{
		hex1 = c / 16;
		hex2 = c % 16;
	}
	if (hex1 < 10)
		putchar(hex1 + 48);
	else
		putchar(hex1 + 87);
	if (hex2 < 10)
		putchar(hex2 + 48);
	else
		putchar(hex2 + 87);
}

void	ft_putstr_non_printable(char *str)
{
	int	index;

	index = 0;
	while (str[index])
	{
		if (str[index] >= 32 && str[index] <= 126)
		{
			putchar(str[index]);
		}
		else
		{
			putchar('\\');
			printhexa(str[index]);
		}
		index++;
	}
}
