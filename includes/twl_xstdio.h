/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_norris_loves_the_norminette.c                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chuck <chuck@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2042/02/30 42:00:00 by chuck             #+#    #+#             */
/*   Updated: 2042/02/30 41:59:59 by chuck            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef TWL_XSTDIO_H
# define TWL_XSTDIO_H

void				twl_putstr(char const *s);
void				twl_putstr_fd(char const *s, int fd);
void				twl_putnchar(int n, char c);
void				twl_putchar_fd(char c, int fd);
int					twl_putchar_tty(int c);
void				twl_putnstr_fd(char const *s, int n, int fd);
int					twl_lprintf(const char *fmt, ...);
void				twl_xprintf(const char *fmt, ...);

#endif
