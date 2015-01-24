/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   twl_ptrswap.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yyang <yyang@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/11 11:53:03 by yyang             #+#    #+#             */
/*   Updated: 2014/11/12 22:43:38 by yyang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

static void		twl_swap_local(int *p1, int *p2)
{
	int tmp;

	tmp = *p1;
	*p1 = *p2;
	*p2 = tmp;
}

void			twl_ptrswap(void *p1, void *p2)
{
	twl_swap_local(p1, p2);
}
