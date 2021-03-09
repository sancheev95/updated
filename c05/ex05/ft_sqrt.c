/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svathuma <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/07 05:54:51 by svathuma          #+#    #+#             */
/*   Updated: 2021/03/07 05:59:35 by svathuma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_answer();

int	ft_sqrt(int nb)
{
	int	i;

	i = 1;
	if (nb % 2 == 1)
		return (0);
	else
		return (ft_answer(nb, i));
}

int	ft_answer(int nb, int i)
{
	if (nb == 2)
		return (i);
	else
		i++;
	return (ft_answer(nb / 2, i));
}
