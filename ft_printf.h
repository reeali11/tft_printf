/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: reeali <reeali@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/17 11:27:22 by omali             #+#    #+#             */
/*   Updated: 2023/08/24 17:16:52 by reeali           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <stddef.h>
# include <stdio.h>
# include <unistd.h>

int		ft_printf(const char *string, ...);
void	ft_putchar(char c, int *len);
void	ft_putstr(char *s, int *len);
void	ft_putnbr(int nb, int *len);
void	ft_putunsnbr(unsigned int unnb, int *len);
void	ft_put_pointer(unsigned long pointer, int *len);
void	ft_put_hexa(unsigned int x, int *len, char c);
#endif