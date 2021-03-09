/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svathuma <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/03 02:20:07 by svathuma          #+#    #+#             */
/*   Updated: 2021/03/03 03:19:11 by svathuma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcapitalize(char *str)
{
	int		index;

	index = 0;
	if (str[index] >= 'a' && str[index] <= 'z')
		str[index] = str[index] - 32;
	while (str[index])
	{
		if (!((str[index] >= 'a' && str[index] <= 'z') ||
					(str[index] >= 'A' && str[index] <= 'Z') ||
					(str[index] >= '0' && str[index] <= '9')))
		{
			if (str[index + 1] >= 'a' && str[index + 1] <= 'z')
				str[index + 1] = str[index + 1] - 32;
		}
		else
		{
			if (str[index + 1] >= 'A' && str[index + 1] <= 'Z')
				str[index + 1] = str[index + 1] + 32;
		}
		index++;
	}
	return (str);
}
