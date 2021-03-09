/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svathuma <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/02 22:33:56 by svathuma          #+#    #+#             */
/*   Updated: 2021/03/05 01:08:32 by svathuma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_uppercase(char *str)
{
	int	index;

	index = 0;
	while (str[index] >= 'A' && str[index] <= 'Z')
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
