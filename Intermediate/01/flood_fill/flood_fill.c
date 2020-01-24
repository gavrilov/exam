/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   flood_fill.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kgavrilo <kgavrilo@student.42.us.org>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/23 10:55:51 by exam              #+#    #+#             */
/*   Updated: 2020/01/23 20:06:21 by kgavrilo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "flood_fill.h"
void	map_fill(char **tab, t_point size, t_point p, char c)
{
	if (p.y < 0 || p.x < 0 || p.y >= size.y || p.x >= size.x || tab[p.y][p.x] != c)
		return ;

	tab[p.y][p.x] = 'F';
	map_fill(tab, size, (t_point){p.x + 1, p.y}, c);
	map_fill(tab, size, (t_point){p.x, p.y + 1}, c);
	map_fill(tab, size, (t_point){p.x - 1, p.y}, c);
	map_fill(tab, size, (t_point){p.x, p.y - 1}, c);
}

void  flood_fill(char **tab, t_point size, t_point begin)
{
	map_fill(tab, size, begin, tab[begin.y][begin.x]);
}

