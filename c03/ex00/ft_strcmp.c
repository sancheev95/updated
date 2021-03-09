/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svathuma <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/03 21:49:34 by svathuma          #+#    #+#             */
/*   Updated: 2021/03/07 21:14:09 by svathuma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strcmp(char *s1, char *s2)
{
	unsigned char	a;
	unsigned char	b;
	int				index;

	index = 0;
	while (s1[index] != '\0' || s2[index] != '\0')
	{
		a = s1[index];
		b = s2[index];
		if ((a - b) != 0)
			return (a - b);
		index++;
	}
	return (0);
}
