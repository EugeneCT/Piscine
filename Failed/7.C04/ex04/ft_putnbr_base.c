/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cliew <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/29 12:51:45 by cliew             #+#    #+#             */
/*   Updated: 2023/06/29 17:07:21 by cliew            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
#include <stdlib.h>

int	check_base_repeat_symbol(char *base)
{
	int	i;
	int j;
	i = 0;
	while (base[i] != '\0')
	{
		j = i + 1;
		if ((base[i] >= 32 && base[i] <= 47) ||( base[i] >= 58 && base[i] <= 64))
			return (1);
		if ((base[i] >= 91 && base[i] <= 96) ||( base[i] >= 123 && base[i] < 127))
       		return (1);

		while (base[j] != '\0')
		{
			if (base[i] == base[j])
			{
				return (1);
			}
			j++;
		}
		i++;
	}
	return (0);
}

int check_base_empty(char *base)
{
	if (base[0] == '\0' || base[1] == '\0')
		return (1);
	else
		return (0);
}

int get_base_count(char *base)
{
    int i;

    i = 0;
    while (base[i] != '\0')
    {
        i++;
    }
    return (i);
}

int get_binary_len(int decimal,int count)
{
	int len_in_binary;
	int quotient;

	quotient = decimal;
	while (quotient != 0)
	{
		quotient = quotient / count;
		len_in_binary++;
	} 
	return len_in_binary;
}

void get_new_letter(long *nbr, int count, char *base,char *rebased)
{
	int	remain;
	long	i;
	
	i = 0;
	while (*nbr>count)
	{
		remain = *nbr % count;
		rebased[i] = base[remain];
		*nbr = *nbr / count;
		i++;
	}
	rebased[i] = base[*nbr];
	rebased[i+1] = '\0';
}

void ft_put_char(){
	char sign;
	
	sign = '-';
	write(1,&sign,1);
}

void	ft_putnbr_base(int nbr, char *base)
{
	int base_len_count;	
	char rebased[get_binary_len(nbr,2)+4];
	long	nbrl = nbr;
	long	*nbr_p = &nbrl;
	long j;
	
	if (nbr < 0)
	{
		nbrl = nbrl * -1;
		ft_put_char();
	}
	if (check_base_repeat_symbol(base) == 1 || check_base_empty(base) == 1)
		return ;
	base_len_count = get_base_count (base);
	get_new_letter(nbr_p, base_len_count, base, rebased);
	j =  get_base_count(rebased);
	while ( j >= 0)
	{
		write(1,&rebased[j-1],1);
		j--;
	}
}

//int main(int argc, char **argv)
//{
//	ft_putnbr_base(atoi(argv[1]),argv[2]);
//}
