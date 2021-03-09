/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svathuma <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/02 22:42:58 by svathuma          #+#    #+#             */
/*   Updated: 2021/03/05 01:11:51 by svathuma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_printable(char *str)
{
	int		index;

	index = 0;
	while (str[index] >= 32 && str[index] <= 126)
	{
		index++;
	}
	if (str[index] == '\0')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
