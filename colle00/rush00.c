/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sizungu <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/16 10:20:36 by sizungu           #+#    #+#             */
/*   Updated: 2020/07/16 14:26:35 by sizungu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_putchar(char c)
{
	write(1, &c, 1);
}

void rush(int x, int y)
{	
	
	char xZero = 'o';
	char xDash = '-';
	char yStroke = '|';
	int i;
	

	//for X ----------------------------------------------------
	 i = 1;
	while(x >= i)
	{ 
		if (i == 1 || x == i)
		 { 
	 		ft_putchar(xZero);
			i++;
 		 }
	 	else
		 {
			 ft_putchar(xDash);
			 i++;
		 }
	}
		ft_putchar('\n');

	//for y------------------------------------------------
		
	i = 1;
	while( y >= i )
	{
		
		while( )
		{
			
			ft_putchar(yStroke);
			i++;
		}
		ft_putchar('\n');
		i++;
	} 	
	

	//second X -------------------------------------------
 
	i = 1;
 	if(y > 2)
	{
		while (x >=i)
		{
			if(i == 1 || x == i)
			{
				ft_putchar(xZero);
				i++;
			}
			else
			{
				ft_putchar(xDash);
				i++;
			}
		}
		ft_putchar('\n');
	}
	 
}
//main function---------------------------------------------------

int main()
{
	rush(5 , 5);
	return(0);
}

