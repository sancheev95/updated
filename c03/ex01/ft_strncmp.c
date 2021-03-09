/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svathuma <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/03 22:04:59 by svathuma          #+#    #+#             */
/*   Updated: 2021/03/07 21:25:38 by svathuma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	index;
	unsigned char	a;
	unsigned char	b;

	index = 0;
	while ((s1[index] != '\0' || s2[index] != '\0') && index < n)
	{
		a = s1[index];
		b = s2[index];
		if ((a - b) != 0)
			return (a - b);
		index++;
	}
	return (0);
}
