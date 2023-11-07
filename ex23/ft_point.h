/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_point.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bda-mota <bda-mota@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/06 10:37:42 by bda-mota          #+#    #+#             */
/*   Updated: 2023/10/06 10:45:51 by bda-mota         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*Create a file ft_point.h that compile the following main 

#include "ft_point.h"

void set_point(t_point *point)
{
	point->x = 42;
 	point->y = 21;
}

int main(void)
{
	t_point point;

 	set_point(&point);
  	return (0);
}
*/
#ifndef FT_POINT_H
# define FT_POINT_H

typedef struct t_point
{
	int	x;
	int	y;
}	t_point;

#endif
