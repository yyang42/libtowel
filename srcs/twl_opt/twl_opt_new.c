/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   twl_opt_new.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yyang <yyang@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/02/24 16:23:02 by yyang             #+#    #+#             */
/*   Updated: 2015/02/24 18:33:58 by yyang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <twl_opt.h>
#include <stdlib.h>
#include <twl_arr.h>

static void build_opt_dict(char **arr_opts, t_twl_dict *opts)
{
	while (*arr_opts)
	{
		if (**arr_opts != '-')
			break ;
		twl_dict_add(opts, twl_strdup(++(*arr_opts)), NULL);
		arr_opts++;
	}
}

t_twl_opt	*twl_opt_new(char **argv)
{
	t_twl_opt *twl_opt;

	twl_opt = malloc(sizeof(t_twl_opt));
	twl_opt->cmd = twl_strdup(argv[0]);
	argv++;
	twl_opt->opts = twl_dict_new();
	build_opt_dict(argv, twl_opt->opts);
	return (twl_opt);
}
