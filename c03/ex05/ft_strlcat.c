/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svathuma <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/04 03:02:45 by svathuma          #+#    #+#             */
/*   Updated: 2021/03/09 10:53:15 by svathuma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int i;
	unsigned int length;

	i = 0;
	length = 0;
	while (*dest != '\0' && i < size)
	{
		i++;
		dest++;
	}
	while (src[length] != '\0' && i + 1 < size)
	{
		*dest = src[length];
		i++;
		length++;
		dest++;
	}
	if (i < size)
		*dest = '\0';
	while (src[length] != '\0')
	{
		i++;
		length++;
	}
	return (i);
}
