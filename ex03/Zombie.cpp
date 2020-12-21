/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnaji <mnaji@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/19 22:10:16 by mnaji             #+#    #+#             */
/*   Updated: 2020/02/19 22:11:00 by mnaji            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie()
{
	
}

Zombie::Zombie(std::string type, std::string name)
{
	std::cout << "Creation du zombie : " << this << std::endl;
	Zname = name;
	Ztype = type;
}

Zombie::Zombie(std::string name)
{
	std::cout << "Creation du zombie : " << this << std::endl;
	Zname = name;
	Ztype = "Default";
}

Zombie::~Zombie()
{
	std::cout << "Destruction du zombie : " << this << std::endl;
}

void Zombie::add_to_horde(std::string name)
{
	Zname = name;
	Ztype = "horde";
}

void Zombie::advert()
{
	std::cout << "<" + Zname + " (" + Ztype + ")> Braiiiiiiinnnssss ..." << std::endl;
}

void Zombie::announce()
{
	std::cout << "Hello my name is " + Zname + " and my type is : " + Ztype << std::endl;
}
