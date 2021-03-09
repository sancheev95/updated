/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svathuma <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/07 00:40:48 by svathuma          #+#    #+#             */
/*   Updated: 2021/03/08 17:37:49 by svathuma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_find_base(char ch, char *base)
{
	int	i;

	i = 0;
	while (base[i] != '\0')
	{
		if (ch == base[i])
			return (i);
		i++;
	}
	return (-1);
}

int	ft_base_len(char *base)
{
	int i;

	i = 0;
	while (*base)
	{
		i++;
		base++;
	}
	return (i);
}

int	ft_check_base(char *base)
{
	int i;

	if (*base == '\0' || *(base + 1) == '\0')
	{
		return (0);
	}
	while (*base)
	{
		i = 1;
		while (base[i])
		{
			if (*base == base[i] || (base[i] == '-' || base[i] == '+'))
			{
				return (0);
			}
			i++;
		}
		base++;
	}
	return (1);
}

int	ft_atoi_base(char *str, char *base)
{
	int	output;
	int	base_nbr;
	int negative;

	negative = 0;
	if (str == 0 || ft_check_base(base) == 0)
		return (0);
	while (*str == ' ' || (*str >= '\t' && *str <= '\r'))
		str++;
	while (*str == '-' || *str == '+')
	{
		negative += (*str++ == '-') ? 1 : 0;
	}
	base_nbr = ft_base_len(base);
	output = 0;
	while (*str != '\0')
	{
		output *= base_nbr;
		if (ft_find_base(*str, base) == -1)
			return (0);
		output += (ft_find_base(*str, base));
		str++;
	}
	return (output * (negative % 2 != 0 ? -1 : 1));
}
