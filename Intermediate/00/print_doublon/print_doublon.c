/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_doublon.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kgavrilo <kgavrilo@student.42.us.org>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/23 09:02:11 by exam              #+#    #+#             */
/*   Updated: 2020/01/23 14:35:33 by kgavrilo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	print_doublon(int *a, int na, int *b, int nb)
{
	int i;
	int j;
	int first_found;

	i = 0;
	j = 0;
	first_found = 0;

	while (i < na && j < nb)
	{
		if (a[i] < b[j])
			i++;
		else if (a[i] > b[j])
			j++;
		else if (a[i] == b [j])
		{
			if (!first_found)
			{
				printf("%i", a[i]);
				first_found = 1;
			}
			else
				printf(" %i", a[i]);
			i++;
			j++;
		}
	}
	printf("\n");
}

//Test 
/*
int main (void)
{

	int a[11] = {-5, 2, 10, 15, 50, 70, 100, 200, 300, 1200, 5000};
	int b[8] = {2, 4, 5, 6, 7, 10, 40, 70};

	print_doublon(a, 11, b, 8);
	return (0);
}
*/
