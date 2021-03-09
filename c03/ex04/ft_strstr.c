/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svathuma <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/04 01:50:32 by svathuma          #+#    #+#             */
/*   Updated: 2021/03/04 01:59:17 by svathuma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	int index;
	int check;

	if (to_find[0] == '\0')
		return (str);
	index = 0;
	while (str[index])
	{
		check = 0;
		if (str[index] == to_find[check])
		{
			while ((str[index + check]) == to_find[check])
			{
				check++;
				if (to_find[check] == '\0')
					return (&str[index]);
			}
		}
		index++;
	}
	return (0);
}
