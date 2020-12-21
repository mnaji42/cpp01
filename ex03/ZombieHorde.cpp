/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnaji <mnaji@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/19 22:11:40 by mnaji             #+#    #+#             */
/*   Updated: 2020/02/19 22:31:15 by mnaji            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "ZombieHorde.hpp"

std::string randomName()
{
	std::string str = "abcdefghijklmnopqrstuvwyz";
	str += "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
	std::string random_name = "";
	
	srand(time(0));
	int taille = (rand() % 10) + 3;

	for(int i = 0 ; i < taille ; i++)
	{
		int pos = rand() % 52;
		random_name += str[pos];
	}
	return (random_name);
}

ZombieHorde::ZombieHorde()
{

}

ZombieHorde::~ZombieHorde()
{
	delete[] ZHz;
}

ZombieHorde::ZombieHorde(int n)
{
	ZHz = new Zombie[n];
	ZHn = n;
	while (n-- > 0)
		ZHz[n] = Zombie("Horde", randomName());
}

void ZombieHorde::announce()
{
	int		i = 0;

	while (i < ZHn)
	{
		ZHz[i].announce();
		i++;
	}
}