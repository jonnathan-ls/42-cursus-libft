/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlacerda <jlacerda@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/08 19:56:49 by jlacerda          #+#    #+#             */
/*   Updated: 2024/10/10 21:23:26 by jlacerda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

void	*ft_calloc(unsigned long nmemb, unsigned long size)
{
	unsigned long	i;
	unsigned char	*ptr;

	ptr = malloc(nmemb * size);
	if (!ptr)
		return (0); // TODO: *(1) review this return due to operating system observation
	i = 0;
	while (i < nmemb * size)
	{
		ptr[i] = 0;
		i++;
	}
	return (ptr);
}

// *(1):
// Depending on your current operating system, the calloc man page 
// and the function’s behavior may differ. The following instruction 
// supersedes what you can find in the man page: If nmemb or size is 0,
// then calloc() returns a unique pointer value that can later be successfully passed to free().
