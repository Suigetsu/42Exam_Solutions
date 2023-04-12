/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_bits.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlagrini <mlagrini@1337.student.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/12 07:29:22 by mlagrini          #+#    #+#             */
/*   Updated: 2023/04/12 07:32:59 by mlagrini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	print_bits(unsigned char octet)
{
	int	oct;
	int	div;

	div = 128;
	oct = octet;
	while (div != 0)
	{
		if (div <= oct)
		{
			write (1, "1", 1);
			oct = oct % div;
		}
		else
			write (1, "0", 1);
		div = div / 2;
	}
}