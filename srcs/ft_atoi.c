/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlacerda <jlacerda@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/08 19:56:49 by jlacerda          #+#    #+#             */
/*   Updated: 2024/10/10 20:57:07 by jlacerda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	is_char_control(char c)
{
	return (c >= 9 && c <= 13);
}

int	is_number(char c)
{
	return (c >= '0' && c <= '9');
}

int	ft_atoi(const char *nptr)
{
	int	i;
	int	sign;
	int	result;

	i = 0;
	sign = 1;
	result = 0;
	while (nptr[i] == ' ' || is_char_control(nptr[i]))
		i++;
	if (nptr[i] == '-')
	{
		sign = -1;
		i++;
	}
	else if (nptr[i] == '+')
		i++;
	while (is_number(nptr[i]))
	{
		result = result * 10 + nptr[i] - '0';
		i++;
	}
	return (result * sign);
}
