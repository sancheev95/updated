/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svathuma <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/07 04:24:24 by svathuma          #+#    #+#             */
/*   Updated: 2021/03/08 21:24:41 by svathuma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	i;
	int	answer;

	answer = 1;
	if (nb < 0)
		return (0);
	else
	{
		i = 1;
		while (i <= nb)
		{
			answer = answer * i;
			i++;
		}
		return (answer);
	}
}
