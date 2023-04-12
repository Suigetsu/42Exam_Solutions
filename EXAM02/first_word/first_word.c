/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   first_word.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlagrini <mlagrini@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/11 12:21:44 by mlagrini          #+#    #+#             */
/*   Updated: 2023/04/11 12:27:39 by mlagrini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	first_word(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		while (str[i] == ' ' || str[i] == '\t')
			i++;
		while (str[i] != ' ' && str[i] != '\t' && str[i])
			write(1, &str[i++], 1);
		return ;
	}
}

int	main(int ac, char **av)
{
	if (ac == 2)
		first_word(av[1]);
	write (1, "\n", 1);
	return (0);
}
