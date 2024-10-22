/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omali <omali@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/21 17:14:44 by omali             #+#    #+#             */
/*   Updated: 2023/08/23 18:05:40 by omali            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putnbr(int nb, int *len)
{
	if (nb == -2147483648)
	{
		write(1, "-2147483648", 11);
		(*len) = (*len) + 11;
		return ;
	}
	if (nb < 0)
	{
		ft_putchar('-', len);
		ft_putnbr(nb * -1, len);
	}
	else
	{
		if (nb > 9)
			ft_putnbr(nb / 10, len);
		ft_putchar(nb % 10 + 48, len);
	}
}
