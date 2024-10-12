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

int	main(void)
{
	printf("\n🔍 Running test suit ... \n\n");
	ft_isalpha_test();
	ft_isdigit_test();
	ft_strncmp_test();
	printf("\n");
	return (0);
}