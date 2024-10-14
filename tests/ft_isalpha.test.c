/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.test.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlacerda <jlacerda@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/07 15:10:11 by jlacerda          #+#    #+#             */
/*   Updated: 2024/10/14 18:42:29 by jlacerda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test.h"
#include "bankai.h"
#include <ctype.h>

int	ft_isalpha(int c);

void	should_validate_letters(void)
{
	int	result;
	int	expected;
	bool compare;

	expected = isalpha(65);
	result = ft_isalpha(65);
	compare = (result > 0 && expected == 0) || (result == 0 && expected > 0);
	expect(compare, "Expected is equal when value is 65");

	expected = isalpha(97);
	result = ft_isalpha(97);
	compare = (result > 0 && expected == 0) || (result == 0 && expected > 0);
	expect(compare, "Expected is equal when value is 97");

	expected = isalpha('A');
	result = ft_isalpha('A');
	compare = (result > 0 && expected == 0) || (result == 0 && expected > 0);
	expect(compare, "Expected is equal when value is A");

	expected = isalpha('a');
	result = ft_isalpha('a');
	compare = (result > 0 && expected == 0) || (result == 0 && expected > 0);
	expect(compare, "Expected is equal when value is a");
}

void	should_validate_non_letters(void)
{
	int	result;
	int	expected;
	bool compare;

	expected = isalpha(126);
	result = ft_isalpha(126);
	compare = (result > 0 && expected == 0) || (result == 0 && expected > 0);
	expect(compare, "Expected is equal when value is 126");

	expected = isalpha('\x1B');
	result = ft_isalpha('\x1B');
	compare = (result > 0 && expected == 0) || (result == 0 && expected > 0);
	expect(compare, "Expected is equal when value is \\x1B");

	expected = isalpha('\t');
	result = ft_isalpha('\t');
	compare = (result > 0 && expected == 0) || (result == 0 && expected > 0);
	expect(compare, "Expected is equal when value is \\t");
}

void	ft_isalpha_test(void)
{
	describe("ft_isalpha");
	it("should validate letters", should_validate_letters);
	it("should validate non letters", should_validate_non_letters);
}
