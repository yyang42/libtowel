/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   twl_isspace.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yyang <yyang@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/10 19:24:09 by yyang             #+#    #+#             */
/*   Updated: 2014/11/12 22:06:41 by yyang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		twl_isspace(int c)
{
	return (c == '\t' || c == '\n' || c == '\v' || c == '\f'
	|| c == '\r' || c == ' ');
}
