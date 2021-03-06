/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kbobrov <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/28 17:11:54 by kbobrov           #+#    #+#             */
/*   Updated: 2016/11/29 19:44:04 by kbobrov          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strncat(char *s1, const char *s2, size_t n)
{
	size_t	i;
	size_t	j;
	size_t	cn;

	i = 0;
	j = 0;
	cn = 0;
	while (s1[i] != '\0')
		i++;
	while (s2[j] != '\0' && cn < n)
	{
		s1[i] = s2[j];
		i++;
		j++;
		cn++;
	}
	s1[i] = '\0';
	return (s1);
}
