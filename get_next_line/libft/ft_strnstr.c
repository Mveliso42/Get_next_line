/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmtana <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/22 06:05:11 by mmtana            #+#    #+#             */
/*   Updated: 2018/05/22 06:05:48 by mmtana           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *s1, const char *s2, size_t n)
{
	int	i;
	int	k;
	int	s;

	if (!*s2)
		return (char *)(s1);
	i = 0;
	while (s1[i] && n > 0)
	{
		if (n < ft_strlen(s2))
			return (NULL);
		k = 0;
		s = i;
		while (s1[s] == s2[k] && s2[k] && s1[s])
		{
			k++;
			s++;
		}
		if (s2[k] == '\0')
			return ((char *)s1 + i);
		n--;
		i++;
	}
	return (NULL);
}
