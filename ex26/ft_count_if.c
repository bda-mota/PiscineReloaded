/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_count_if.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bda-mota <bda-mota@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/09 14:48:20 by bda-mota          #+#    #+#             */
/*   Updated: 2023/10/09 16:28:51 by bda-mota         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*Create the funciton ft_count_if which will return the number of elements of the array that return 1, passed to the function f*/
int	ft_count_if(char **tab, int (*f)(char*))
{
	int	count;

	count = 0;
	while (*tab)
	{
		if (f(*tab) == 1)
			count++;
		tab++;
	}
	return (count);
}
