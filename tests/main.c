/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlacerda <jlacerda@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/10 20:00:15 by jlacerda          #+#    #+#             */
/*   Updated: 2024/10/26 20:32:47 by jlacerda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test.h"

int	main(void)
{
	printf("\n🔍 Running test suit ... \n\n");
	ft_isalpha_test();
	ft_isdigit_test();
	ft_strncmp_test();
	ft_bzero_test();
	ft_calloc_test();
	ft_isalnum_test();
	ft_isascii_test();
	ft_isprint_test();
	ft_atoi_test();
	ft_itoa_test();
	ft_memchr_test();
	ft_memcmp_test();
	ft_memcpy_test();
	ft_split_test();
	ft_strchr_test();
	ft_strdup_test();
	ft_strjoin_test();
	ft_strmapi_test();
	ft_strtrim_test();
	ft_tolower_test();
	ft_toupper_test();
	ft_memset_test();
	ft_memmove_test();
	
	// BONUS

	printf("\n");
	return (0);
}