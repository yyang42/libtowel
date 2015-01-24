/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   twl_dict_set.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juschaef <juschaef@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/01/09 13:21:53 by yyang             #+#    #+#             */
/*   Updated: 2015/01/23 20:44:39 by juschaef         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <twl_dict.h>
#include <libft.h>

void		twl_dict_set(t_lst *lst, char *key, void *data, void (*delfn)())
{
	t_twl_lst_elem	*elem;

	elem = twl_dict_get_elem(lst, key);
	if (elem != NULL)
	{
		delfn(elem->data);
		elem->data = data;
	}
	else
		twl_dict_add(lst, key, data);
}
