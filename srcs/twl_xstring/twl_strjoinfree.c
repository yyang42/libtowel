/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   twl_strjoinfree.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yyang <yyang@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/01/02 19:42:29 by yyang             #+#    #+#             */
/*   Updated: 2015/01/24 20:38:46 by yyang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <twl_string.h>
#include <twl_xstring.h>
#include <stdlib.h>

char	*twl_strjoinfree(char *left, char *right, char free_num)
{
	char *out;

	out = twl_strjoin(left, right);
	if (free_num == 'b')
	{
		free(left);
		free(right);
	}
	else if (free_num == 'l')
		free(left);
	else if (free_num == 'r')
		free(right);
	return (out);
}
