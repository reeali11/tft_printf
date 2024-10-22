/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putunsnbr.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: reeali <reeali@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/21 22:05:40 by omali             #+#    #+#             */
/*   Updated: 2023/08/23 21:04:54 by reeali           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putunsnbr(unsigned int unnb, int *len)
{
	if (unnb > 9)
	{
		ft_putunsnbr(unnb / 10, len);
		ft_putunsnbr(unnb % 10, len);
	}
	else
		ft_putchar(unnb + 48, len);
}
