/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vvalet <vvalet@student.s19.be>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/06 15:46:30 by vvalet            #+#    #+#             */
/*   Updated: 2023/04/24 09:43:59 by vvalet           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include "libft.h"
# include <stdarg.h>

# define HEX_MIN "0123456789abcdef"
# define HEX_MAJ "0123456789ABCDEF"

int	ft_convert(va_list list, char key);
int	ft_printf(const char *s, ...);
int	ft_putchar_value_fd(char c, int fd);
int	ft_putmem_hex_fd(long int n, int fd);
int	ft_putnbr_value_fd(int n, int fd);
int	ft_putstr_value_fd(char *s, int fd);
int	ft_putui_fd(unsigned int n, int fd);
int	ft_putui_hex_fd(unsigned int n, int ltrs, int fd);

#endif
