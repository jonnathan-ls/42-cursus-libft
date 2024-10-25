/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back_bonus.test.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlacerda <jlacerda@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/22 21:00:00 by jlacerda          #+#    #+#             */
/*   Updated: 2024/10/22 21:30:00 by jlacerda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test.h"

static bool all_tests_passed = true;

static void run_test_case(t_list **lst, t_list *new, const char *description)
{
    ft_lstadd_back(lst, new);
    t_list *last = ft_lstlast(*lst);
    if (last != new)
    {
        all_tests_passed = false;
        printf("\t🔴 Test failed: %s\n", description);
    }
}

void ft_lstadd_back_test(void)
{
    t_list *lst = NULL;
    t_list *new_node = ft_lstnew((void *)1);

    // Teste com lista vazia
    run_test_case(&lst, new_node, "Adicionar a uma lista vazia");

    // Teste com um elemento
    new_node = ft_lstnew((void *)2);
    run_test_case(&lst, new_node, "Adicionar a uma lista com um elemento");

    // Teste com múltiplos elementos
    new_node = ft_lstnew((void *)3);
    run_test_case(&lst, new_node, "Adicionar a uma lista com múltiplos elementos");

    // Teste com valor mínimo (NULL)
    new_node = ft_lstnew(NULL);
    run_test_case(&lst, new_node, "Adicionar um nó com valor NULL");

    // Teste com valor máximo (INT_MAX)
    new_node = ft_lstnew((void *)INT_MAX);
    run_test_case(&lst, new_node, "Adicionar um nó com valor INT_MAX");

    // Teste com valor zero
    new_node = ft_lstnew((void *)0);
    run_test_case(&lst, new_node, "Adicionar um nó com valor 0");

    if (all_tests_passed)
        printf("\t✅ ft_lstadd_back\n");

    // Libera a lista
    t_list *tmp;
    while (lst)
    {
        tmp = lst;
        lst = lst->next;
        free(tmp);
    }
}