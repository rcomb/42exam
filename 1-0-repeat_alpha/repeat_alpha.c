/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   repeat_alpha.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcombe <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/25 21:57:05 by rcombe            #+#    #+#             */
/*   Updated: 2019/04/25 22:12:09 by rcombe           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		main(int ac, char **av)
{
	if (ac == 2)
	{
		int i = 0;
		while(av[1][i])
		{
			int count;

			if (av[1][i] >= 'A' && av[1][i] <= 'Z')
			{
				count = av[1][i] - 'A' + 1;
				while (count)
				{
					write(1, &av[1][i], 1);
					count--;
				}
			}
			else if (av[1][i] >= 'a' && av[1][i] <= 'z')
			{
				count = av[1][i] - 'a' + 1;
				while (count)
				{
					write(1, &av[1][i], 1);
					count--;
				}
			}
			else
				write(1, &av[1][i], 1);
			i++;
		}
	}
	write(1, "\n", 1);
	return 0;
}
