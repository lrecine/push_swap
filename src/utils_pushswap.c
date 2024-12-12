/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils_pushswap.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lrecine- <lrecine-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/12 18:03:05 by lrecine-          #+#    #+#             */
/*   Updated: 2024/12/12 18:03:30 by lrecine-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include "../printf/ft_printf.h"
#include <stdlib.h>

void	error_detected(int *pile)
{
	free(pile);
	ft_printf("Error\n");
	exit(1);
}

int	push_swap_atoi(char *str, int *pile)
{
	unsigned int		i;
	int					sign;
	unsigned long int	nb;

	i = 0;
	nb = 0;
	sign = 1;
	while ((str[i] >= 9 && str[i] <= 13) || str[i] == ' ')
		i++;
	if (str[i] == '-')
		sign = -1;
	if (str[i] == '-' || str[i] == '+')
		i++;
	while (str[i])
	{
		if (str[i] < '0' || str[i] > '9')
			error_detected(pile);
		nb = (nb * 10) + (str[i] - '0');
		i++;
	}
	if ((nb > 2147483648 && sign == -1)
		|| (nb > 2147483647 && sign == 1))
		error_detected(pile);
	return (nb * sign);
}

int	push_swap_strlen(char **av)
{
	int	i;

	i = 0;
	while (av[i])
		i++;
	return (i);
}

int	check_sorted(int *pile, int size, int order)
{
	int	i;

	if (order == 0)
	{
		i = 1;
		while (i < size)
		{
			if (pile[i] < pile[i - 1])
				return (0);
			i++;
		}
		return (1);
	}
	else
	{
		i = 1;
		while (i < size)
		{
			if (pile[i] > pile[i - 1])
				return (0);
			i++;
		}
		return (1);
	}
}

void	check_doubles(int *pile, int size)
{
	int	i;
	int	j;

	i = 0;
	j = 1;
	while (i < size)
	{
		while (j < size)
		{
			if (pile[i] == pile[j])
				error_detected(pile);
			j++;
		}
		i++;
		j = i + 1;
	}
}
