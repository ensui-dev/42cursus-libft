/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mju-ferr <mju-ferr@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/15 01:02:36 by mju-ferr          #+#    #+#             */
/*   Updated: 2025/10/15 01:14:06 by mju-ferr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	j;

	if (little[0] == '\0')
		return (big);
	i = 0;
	while (i < len && big[i])
	{
		j = 0;
		while (big[i + j] && big[i + j] == little[j])
			i++;
		if (little[j] == '\0')
			return ((char *) &big[i]);
	}
	return (NULL);
}
