/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   twl_opt.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yyang <yyang@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/02/16 16:43:29 by emaniez           #+#    #+#             */
/*   Updated: 2015/02/25 10:58:56 by yyang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef TWL_OPT_H
# define TWL_OPT_H

# include <twl_lst.h>

typedef struct	s_twl_opt
{
	char		*cmd;
	t_lst		*opts;
	t_lst		*non_opt_args;
}				t_twl_opt;

t_twl_opt		*twl_opt_new(char **argv);
t_bool			twl_opt_exist(t_twl_opt *twl_opt, char *opt_key);

#endif