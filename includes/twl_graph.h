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

#ifndef TWL_GRAPH_H
# define TWL_GRAPH_H

# include "twl_lst.h"
# include "twl_graph_node_mgr.h"

# include <stdlib.h>
# include <stdbool.h>
# include <string.h>

typedef struct		s_graph
{
	t_lst			*nodes_;
}					t_graph;

t_graph				*twl_graph_new(void);
void				twl_graph_del(t_graph *graph, void (*del_fn)());

size_t				twl_graph_size(t_graph *this);
void				twl_graph_reset(t_graph *this);

void				twl_graph_add(t_graph *this, t_graph_node *node);
void				twl_graph_link(t_graph *this, t_graph_node *node1,
														t_graph_node *node2);

int					twl_graph_longest_path(t_graph *this);

#endif
