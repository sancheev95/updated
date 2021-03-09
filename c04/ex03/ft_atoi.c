/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svathuma <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/06 19:19:04 by svathuma          #+#    #+#             */
/*   Updated: 2021/03/06 19:42:49 by svathuma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(char *str)
{
	int negative;
	int output;
	int	index;

	negative = 0;
	output = 0;
	index = 0;
	while (str[index] == ' ' || (str[index] >= '\t' && str[index] <= '\r'))
	{
		index++;
	}
	while (str[index] == '-' || str[index] == '+')
	{
		if (str[index] == '-')
		{
			negative++;
		}
		index++;
	}
	while (str[index] >= '0' && str[index] <= '9')
	{
		output = (str[index] - '0') + output * 10;
		index++;
	}
	return (output * (negative % 2 != 0 ? -1 : 1));
}
