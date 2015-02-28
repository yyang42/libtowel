/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   twl_lst_get_rand.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juschaef <juschaef@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/12/12 09:41:52 by yyang             #+#    #+#             */
/*   Updated: 2015/02/28 19:16:44 by juschaef         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <twl_lst.h>
#include <twl_xstdlib.h>

void	*twl_lst_get_rand(t_lst *lst)
{
	t_twl_lst_elem	*elem;
	size_t len;
	int random;

	len = twl_lst_len(lst);
	random = twl_randint(0, len - 1);
	elem = twl_lst_get_elem__(lst, random);
	if (elem)
		return (elem->data);
	return (NULL);
}
