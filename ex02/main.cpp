/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnaji <mnaji@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/19 18:42:20 by mnaji             #+#    #+#             */
/*   Updated: 2020/02/20 02:29:23 by mnaji            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include "ZombieEvent.hpp"

Zombie	*zombie_scream()
{
	Zombie *z;
	ZombieEvent	*ze = nullptr;

	z = ze->newZombie(randomName());
	std::cout << "HAAAAAAAAAAAAAAAAAAAA" << std::endl;
	return (z);
}

int		main()
{
	Zombie z1("Robert");
	Zombie z2("Slow", "Albert");
	Zombie *z3;
	Zombie *horde1;

	z3 = zombie_scream();
	z3->advert();

	horde1 = new Zombie[3];
	horde1[0].add_to_horde("Bouboule");
	horde1[0].announce();
	horde1[1].add_to_horde("Mickael");
	horde1[1].announce();
	horde1[2].add_to_horde("Babale");
	horde1[2].announce();
	delete z3;
	delete[] horde1;
	return (0);
}