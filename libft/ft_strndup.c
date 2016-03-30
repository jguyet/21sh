/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strndup.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jguyet <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/02 04:33:28 by jguyet            #+#    #+#             */
/*   Updated: 2016/02/25 22:44:33 by jguyet           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

#include <stdlib.h>

char		*ft_strndup(const char *src, size_t n)
{
	char	*res;
	char	*tmp;
	char	*s;

	s = (char*)src;
	if (!src || !(res = (char *)malloc(sizeof(char) * (n + 1))))
		return (NULL);
	tmp = res;
	while (*s && n-- > 0)
		*res++ = *s++;
	*res = '\0';
	return (tmp);
}
