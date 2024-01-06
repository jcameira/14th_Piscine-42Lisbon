/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_do_op.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcameira <jcameira@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/20 14:40:48 by jcameira          #+#    #+#             */
/*   Updated: 2023/09/20 17:41:11 by jcameira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_do_op.h"

void	ft_do_op(char **argv, char *nb1, char *nb2, int (*f)(char*))
{
	int	num1;
	int	num2;

	num1 = f(nb1);
	num2 = f(nb2);
	if (!ft_strcmp(argv[2], "+"))
		ft_putnbr(ft_addition(num1, num2));
	else if (!ft_strcmp(argv[2], "-"))
		ft_putnbr(ft_subtraction(num1, num2));
	else if (!ft_strcmp(argv[2], "*"))
		ft_putnbr(ft_multiplication(num1, num2));
	else if (!ft_strcmp(argv[2], "/") || !ft_strcmp(argv[2], "%"))
	{
		if (num2 == 0 && !ft_strcmp(argv[2], "/"))
			write(1, "Stop : division by zero", 23);
		else if (num2 != 0 && !ft_strcmp(argv[2], "/"))
			ft_putnbr(ft_division(num1, num2));
		else if (num2 == 0 && !ft_strcmp(argv[2], "%"))
			write(1, "Stop : modulo by zero", 21);
		else
			ft_putnbr(ft_modulo(num1, num2));
	}
	else
		ft_putnbr(0);
}

int	main(int argc, char **argv)
{
	if (argc != 4)
		return (1);
	ft_do_op(argv, argv[1], argv[3], ft_atoi);
	write(1, "\n", 1);
	return (0);
}
