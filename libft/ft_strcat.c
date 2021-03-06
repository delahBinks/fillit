/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ambelghi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/11 02:49:24 by ambelghi          #+#    #+#             */
/*   Updated: 2019/04/24 13:14:16 by ambelghi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strcat(char *s1, char const *s2)
{
	int	i;
	int	z;

	z = 0;
	i = 0;
	while (s1[i] != '\0')
		i++;
	while (s2[z] != '\0')
		s1[i++] = s2[z++];
	s1[i] = '\0';
	return (s1);
}
