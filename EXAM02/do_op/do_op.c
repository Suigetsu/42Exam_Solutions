/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   do_op.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlagrini <mlagrini@1337.student.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/13 07:06:27 by mlagrini          #+#    #+#             */
/*   Updated: 2023/04/13 07:16:01 by mlagrini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

void	do_op(char *str1, char c, char *str2)
{
	int	nbr1;
	int	nbr2;
	int	result;
	
	nbr1 = atoi(str1);
	nbr2 = atoi(str2);
	result = 0;
	if (c == '+' || c == '-' || c == '/' || c == '*' || c == '%')
	{
		if (c == '+')
			result = nbr1 + nbr2;
		else if (c == '-')
			result = nbr1 - nbr2;
		else if (c == '/')
			result = nbr1 / nbr2;
		else if (c == '*')
			result = nbr1 * nbr2;
		else if (c == '%')
			result = nbr1 % nbr2;
	}
	else
		return ;
	printf("%d\n", result);
}

int	main(int ac, char **av)
{
	if (ac == 4)
		do_op(av[1], av[2][0], av[3]);
	else
		write (1, "\n", 1);
	return (0);
}