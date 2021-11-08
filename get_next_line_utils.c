/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils_bonus.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjolivea <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/08 18:33:04 by tjolivea          #+#    #+#             */
/*   Updated: 2021/11/08 19:04:50 by tjolivea         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line_bonus.h"

size_t	ft_strlen(char *s)
{
	size_t	i;

	i = 0;
	if (!s)
		return (0);
	while (s[i] != '\0')
		i++;
	return (i);
}

char	*ft_strchr(char *s, int c)
{
	ssize_t	i;

	i = -1;
	if (!s)
		return (0);
	if (!c)
		return (s + ft_strlen(s));
	while (s[++i])
		if (s[i] == (char) c)
			return (s + i);
	return (0);
}

char	*ft_strjoin(char *leftover, char *buf)
{
	ssize_t	i;
	ssize_t	j;
	char	*new;

	if (!leftover)
	{
		leftover = malloc(1 * sizeof(char));
		if (!leftover)
			return (0);
		leftover[0] = '\0';
	}
	if (!buf)
		return (0);
	new = malloc(((ft_strlen(leftover) + ft_strlen(buf)) + 1) * sizeof(char));
	if (!new)
		return (0);
	i = -1;
	j = 0;
	while (leftover[++i])
		new[i] = leftover[i];
	while (buf[j])
		new[i++] = buf[j++];
	new[i] = '\0';
	free(leftover);
	return (new);
}
