/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmtana <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/21 19:10:31 by mmtana            #+#    #+#             */
/*   Updated: 2018/05/21 19:42:10 by mmtana           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char	*ft_strnew(size_t size)
{
	size_t	i;
	char	*new_st;

	new_st = (char *)malloc(sizeof(char) * size + 1);
	if (!new_st)
		return (NULL);
	i = 0;
	while (i < size)
	{
		new_st[i] = '\0';
		i++;
	}
	new_st[i] = '\0';
	return (new_st);
}
