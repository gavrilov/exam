/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   count_alpha.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: exam <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/23 11:42:03 by exam              #+#    #+#             */
/*   Updated: 2020/01/23 11:55:05 by exam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int main (int ac, char **av)
{
	int i;
	int first_printed;
	int tab[26] = {0};

	if (ac == 2)
	{
		i = 0;
		first_printed = 0;
		while (av[1][i] != '\0')
		{
			if (av[1][i] >= 'A' && av[1][i] <= 'Z')
				av[1][i] += 32;
			if (av[1][i] >= 'a' && av[1][i] <= 'z')
				tab[av[1][i] - 97]++;
			i++;
		}
		i = 0;
		while (av[1][i] != '\0')
		{
			if (av[1][i] >= 'a' && av[1][i] <= 'z')
			{
				if (first_printed == 0 && tab[av[1][i] - 97]!= 0)
				{
					printf("%i%c", tab[av[1][i] - 97], av[1][i]);
					first_printed = 1;
					tab[av[1][i] - 97] = 0;
				}
				else if (tab[av[1][i] - 97] != 0)
				{
					printf(", %i%c", tab[av[1][i] - 97], av[1][i]);
					tab[av[1][i] - 97] = 0;
				}
			}
			i++;
		}
	}
	printf("\n");
	return (0);
}
