/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: laoubaid <laoubaid@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 15:19:30 by laoubaid          #+#    #+#             */
/*   Updated: 2024/04/24 23:24:37 by laoubaid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fdf.h"

char	*ft_strjoin(char *s1, char *s2)
{
	int		i;
	char	*join;

	i = 0;
	if (!s1 && !s2)
		return (0);
	join = (char *)malloc(ft_strlen(s1) + ft_strlen(s2) + 1);
	if (!join)
		return (0);
	if (s1)
	{
		while (s1[i])
		{
			join[i] = s1[i];
			i++;
		}
		free(s1);
	}
	if (s2)
	{
		while (*s2)
			join[i++] = *s2++;
	}
	join[i] = 0;
	return (join);
}
