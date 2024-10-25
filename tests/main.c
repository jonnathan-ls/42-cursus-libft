/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlacerda <jlacerda@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/10 20:00:15 by jlacerda          #+#    #+#             */
/*   Updated: 2024/10/11 23:12:19 by jlacerda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test.h"

void	ft_isdigit_test(void);
void	ft_isalpha_test(void);
void	ft_strncmp_test(void);
void	ft_bzero_test(void);
void ft_atoi_test(void);
void ft_calloc_test(void);
void ft_isalnum_test(void);
void ft_isascii_test(void);
void ft_isprint_test(void);
void ft_itoa_test(void);
void ft_lstadd_back_test(void);
void ft_lstadd_front_test(void);
void ft_memchr_test(void);
void ft_memcmp_test(void);
void ft_memcpy_test(void);
void ft_memset_test(void);
void ft_split_test(void);
void ft_strchr_test(void);
void ft_strdup_test(void);
void ft_strjoin_test(void);
void ft_strmapi_test(void);
void ft_strtrim_test(void);
void ft_tolower_test(void);
void ft_toupper_test(void);

int	main(void)
{
	printf("\n🔍 Running test suit ... \n\n");
	ft_isalpha_test();
	ft_isdigit_test();
	ft_strncmp_test();
	ft_bzero_test();
	ft_atoi_test();
	ft_calloc_test();
	ft_isalnum_test();
	ft_isascii_test();
	ft_isprint_test();
	ft_itoa_test();
	ft_memchr_test();
	ft_memcmp_test();
	ft_memcpy_test();
	ft_memset_test();
	ft_split_test();
	ft_strchr_test();
	ft_strdup_test();
	ft_strjoin_test();
	ft_strmapi_test();
	ft_strtrim_test();
	ft_tolower_test();
	ft_toupper_test();
	
	// BONUS
	ft_lstadd_back_test();
	ft_lstadd_front_test();

	printf("\n");
	return (0);
}