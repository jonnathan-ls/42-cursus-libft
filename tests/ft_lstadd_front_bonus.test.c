/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.test.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlacerda <jlacerda@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/21 21:45:00 by jlacerda          #+#    #+#             */
/*   Updated: 2024/10/21 22:00:00 by jlacerda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "test.h"

static bool all_tests_passed = true;

static void run_test_case(t_list **lst, t_list *new, void *expected_content, t_list *expected_next)
{
    ft_lstadd_front(lst, new);
    if ((*lst)->content != expected_content || (*lst)->next != expected_next)
    {
        all_tests_passed = false;
        printf("\t🔴 Test failed with content: %p, expected: %p\n", (*lst)->content, expected_content);
        printf("\t   next: %p, expected: %p\n", (void *)(*lst)->next, (void *)expected_next);
    }
}

void ft_lstadd_front_test(void)
{
    t_list *lst = NULL;
    t_list *new_node = NULL;

    // Teste com lista vazia
    new_node = ft_lstnew((void *)1);
    run_test_case(&lst, new_node, (void *)1, NULL);
				
    // Teste com um elemento na lista
    new_node = ft_lstnew((void *)2);
    run_test_case(&lst, new_node, (void *)2, lst);

    // Teste com múltiplos elementos
    new_node = ft_lstnew((void *)3);
    run_test_case(&lst, new_node, (void *)3, lst);

    // Teste com valor mínimo (NULL)
    new_node = ft_lstnew(NULL);
    run_test_case(&lst, new_node, NULL, lst);

    // Teste com valor máximo (LONG_MAX)
    new_node = ft_lstnew((void *)LONG_MAX);
    run_test_case(&lst, new_node, (void *)LONG_MAX, lst);

    if (all_tests_passed)
        printf("\t✅ ft_lstadd_front\n");
}
