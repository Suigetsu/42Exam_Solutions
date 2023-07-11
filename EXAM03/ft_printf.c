/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlagrini <mlagrini@1337.student.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/10 19:19:04 by mlagrini          #+#    #+#             */
/*   Updated: 2023/07/11 12:46:59 by mlagrini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>
#include <stdarg.h>
#include <limits.h>

int	ft_putchar(char c)
{
	write (1, &c, 1);
	return (1);
}

int	ft_putstr(char *str)
{
	int	i;

	i = 0;
	if (!str)
	{
		write (1, "(null)", 6);
		return (6);
	}
	while (str[i])
		write(1, &str[i++], 1);
	return (i);
}

int	countnbr(int n)
{
	int	count;

	count = 0;
	if (n == 0)
		return (1);
	if (n == INT_MIN)
		return (11);
	if (n < 0)
		n *= -1;
	while (n != 0)
	{
		n /= 10;
		count++;
	}
	return (count);
}

int	ft_putnbr(int n)
{
	int		count;
	char	nbr[11] = "0123456789";

	count = countnbr(n);
	if (n == INT_MIN)
		write (1, "-2147483648", 11);
	else if (n < 0)
	{
		count++;
		ft_putchar('-');
		ft_putnbr(n * -1);
	}
	else if (n >= 0 && n <= 9)
		write (1, &nbr[n], 1);
	else
	{
		ft_putnbr(n / 10);
		ft_putnbr(n % 10);
	}
	return (count);
}

int	ft_puthex(unsigned int n)
{
	char	nbr[17] = "0123456789abcdef";
	int		count;

	count = 0;
	if (n >= 0 && n <= 16)
		ft_putchar(nbr[n]);
	else
	{
		ft_puthex(n / 16);
		ft_puthex(n % 16);
	}
	if (n == 0)
		return (1);
	while (n != 0)
	{
		n /= 16;
		count++;
	}
	return (count);
}

int	ft_printf(const char *format, ...)
{
	va_list	ap;
	int		i;
	int		count;

	i = 0;
	count = 0;
	va_start(ap, format);
	while (format[i])
	{
		if (format[i] == '%')
		{
			i++;
			if (format[i] == 's')
				count += ft_putstr(va_arg(ap, char *));
			else if (format[i] == 'd')
				count += ft_putnbr(va_arg(ap, int));
			else if (format[i] == 'x')
				count += ft_puthex(va_arg(ap, unsigned int));
			i++;
		}
		else
		{
			count += ft_putchar(format[i]);
			i++;
		}
	}
	va_end(ap);
	return (count);
}
