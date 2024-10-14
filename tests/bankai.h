/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bankai.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlacerda <jlacerda@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/07 21:46:38 by jlacerda          #+#    #+#             */
/*   Updated: 2024/10/14 18:38:54 by jlacerda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BANKAI_H
# define BANKAI_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

typedef void	(*t_test_fn)();

typedef struct s_test_case {
	char				*description;
	t_test_fn			func;
	struct s_test_case	*next;
}	t_test_case;

typedef struct s_test_suite {
	char				*description;
	t_test_case			*tests;
	t_test_fn			before;
	t_test_fn			after;
	struct s_test_suite	*next;
	bool				all_tests_passed;
}	t_test_suite;

void	describe(const char *description);

void	it(const char *description, t_test_fn func);

void	before(t_test_fn func);

void	after(t_test_fn func);

void	expect(int condition, const char *message);

void	run_tests(void);

#endif
