/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dshumba <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/17 10:12:05 by dshumba           #+#    #+#             */
/*   Updated: 2018/05/23 10:29:52 by dshumba          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnew(size_t size)
{
	char	*s;
	size_t	i;

	s = malloc(sizeof(char) * size + 1);
	i = 0;
	if (!s)
		return (0);
	while (s[i])
	{
		s[i] = '\0';
		i++;
	}
	return (s);
}