/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svathuma <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/02 22:25:54 by svathuma          #+#    #+#             */
/*   Updated: 2021/03/05 00:54:04 by svathuma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_lowercase(char *str)
{
	int		index;

	index = 0;
	while (str[index] >= 'a' && str[index] <= 'z')
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
