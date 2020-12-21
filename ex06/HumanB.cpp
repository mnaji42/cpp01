/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnaji <mnaji@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/19 23:35:08 by mnaji             #+#    #+#             */
/*   Updated: 2020/02/20 00:22:57 by mnaji            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(std::string name)
{
	HBname = name;
}

HumanB::~HumanB()
{

}

void HumanB::attack()
{
	std::cout << HBname + " attacks with his " + HBwp->getType() << std::endl;
}

void HumanB::setWeapon(Weapon &wp)
{
	HBwp = &wp;
}