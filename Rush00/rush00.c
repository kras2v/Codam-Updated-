/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   rush00.c                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: ikhelili <ikhelili@student.42.fr>            +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/08/17 15:15:37 by ikhelili      #+#    #+#                 */
/*   Updated: 2024/08/17 19:18:02 by ikhelili      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	rush(int x, int y)
{
	int	i;
	int	j;

	i = 1;
	while (i <= y)
	{
		j = 1;
		while (j <= x)
		{
			if ((i == 1 && j == 1) || (i == y && j == 1)
				|| (i == y && j == x) || (i == 1 && j == x))
				ft_putchar('o');
			else if ((i == 1 || i == y) && (j != x && j != 1))
				ft_putchar('-');
			else if ((j == 1 || j == x) && (i != y && i != 1))
				ft_putchar('|');
			else
				ft_putchar(' ');
			j++;
		}
		ft_putchar('\n');
		i++;
	}
}
