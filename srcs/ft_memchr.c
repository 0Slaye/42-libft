/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: uwywijas <uwywijas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/01 11:09:37 by uwywijas          #+#    #+#             */
/*   Updated: 2023/11/28 20:21:51 by uwywijas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t	i;
	char	convert;

	i = 0;
	convert = c;
	while (i < n)
	{
		if (((char *) s)[i] == convert)
			return (&((char *) s)[i]);
		i++;
	}
	return (0);
}
