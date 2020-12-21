/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieEvent.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnaji <mnaji@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/19 17:39:57 by mnaji             #+#    #+#             */
/*   Updated: 2020/02/19 21:35:23 by mnaji            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ZombieEvent.hpp"

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

void ZombieEvent::setZombieType(std::string type)
{
	ZEtype = type;
}

Zombie *ZombieEvent::newZombie(std::string name)
{
	Zombie *z = new Zombie(name);

	return (z);
}

void ZombieEvent::randomChump()
{
	Zombie z = Zombie(randomName());
	z.announce();
}