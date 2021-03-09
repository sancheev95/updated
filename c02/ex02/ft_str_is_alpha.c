/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svathuma <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/02 19:23:42 by svathuma          #+#    #+#             */
/*   Updated: 2021/03/05 01:01:52 by svathuma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_alpha(char *str)
{
	int		index;

	index = 0;
	while ((str[index] >= 'A' && str[index] <= 'Z') ||
			(str[index] >= 'a' && str[index] <= 'z'))
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
