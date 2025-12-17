/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_printf.h                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: jsmidt <jsmidt@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2025/10/24 18:24:30 by jsmidt        #+#    #+#                 */
/*   Updated: 2025/10/30 17:52:56 by jsmidt        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H
# include <unistd.h>
# include <stdio.h>
# include <stdarg.h>
# include <stdlib.h>
# include <limits.h>
# include "libft/libft.h"

int	ft_printf(const char *str, ...);
int	ft_putstr(char *s);
int	ft_putpercent(void);
int	ft_print_nbr(int n);
int	ft_print_unbr(size_t n);
int	ft_print_ptr(void *ptr);
int	ft_print_hexl(unsigned int n);
int	ft_print_hexu(unsigned int n);

#endif