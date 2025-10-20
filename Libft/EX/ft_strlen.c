/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mju-ferr <mju-ferr@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/14 18:27:44 by mju-ferr          #+#    #+#             */
/*   Updated: 2025/10/20 20:17:06 by mju-ferr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlen(const char *s)
{
	size_t	size;

	size = -1;
	while (s[++size])
		;
	return (size);
}
/*int	main(void)
{
	printf("%zu", ft_strlen(""));
	printf("%zu", strlen(""));
	return (0);
}*/