/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimat_div_mod.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcameira <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/04 10:56:02 by jcameira          #+#    #+#             */
/*   Updated: 2023/09/04 12:07:55 by jcameira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	tmp;

	tmp = *a;
	*a /= *b;
	*b = tmp % *b;
}
/*
int	main(void)
{
	int	a, b;

	a = 17;
	b = 10;
	ft_ultimate_div_mod(&a, &b);
	printf("div: %d\nmod: %d", a, b);
	return (0);
}
*/
