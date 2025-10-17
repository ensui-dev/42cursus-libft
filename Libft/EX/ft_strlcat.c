/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mju-ferr <mju-ferr@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/15 00:17:35 by mju-ferr          #+#    #+#             */
/*   Updated: 2025/10/15 01:27:40 by mju-ferr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	int		j;
	size_t	dst_len;
	size_t	src_len;

	dst_len = ft_strlen(dst);
	src_len = ft_strlen(src);
	if (size <= dst_len)
		return (dst_len + src_len);
	j = 0;
	while (src[j] && j + dst_len < size - 1)
	{
		dst[dst_len + j] = src[j];
		j++;
	}
	dst[dst_len + j] = '\0';
	return (src_len + dst_len);
}

/*#include <stdio.h>
int	main(void)
{
	char src[20] = "";
	char dest[20] = "nop";
	printf ("dest length is %d and is %s", ft_strlcat(dest, src, 0), dest);
	return (0);
}*/