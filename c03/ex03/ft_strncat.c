/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svathuma <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/03 23:28:27 by svathuma          #+#    #+#             */
/*   Updated: 2021/03/07 21:34:41 by svathuma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int index;
	unsigned int source;

	index = 0;
	source = 0;
	while (dest[index] != '\0')
		index++;
	while (src[source] != '\0' && source < nb)
	{
		dest[index + source] = src[source];
		source++;
	}
	dest[index + source] = '\0';
	return (dest);
}
