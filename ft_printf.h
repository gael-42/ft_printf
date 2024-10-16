/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lemarian <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/05 16:27:19 by lemarian          #+#    #+#             */
/*   Updated: 2024/06/10 15:39:36 by lemarian         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#ifndef FT_PRINTF_H
# define FT_PRINTF_H
# include <stdarg.h>
# include <unistd.h>
# include <stdio.h>
# include <stdlib.h>
# include <stdint.h>

int	ft_printf(const char *str, ...);
int	print_char(char c);
int	print_str(char *str);
int	print_int(int nb);
int	print_unsigned(unsigned int nb);
int	convert_hexa(size_t nb, int letter_size);
int	print_address(void *ptr);
#endif
