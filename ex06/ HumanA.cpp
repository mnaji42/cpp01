/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*    HumanA.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnaji <mnaji@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/19 23:33:44 by mnaji             #+#    #+#             */
/*   Updated: 2020/02/20 00:53:07 by mnaji            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon &wp) : HAname(name), HAwp(wp)
{

}

HumanA::~HumanA()
{

}

void HumanA::attack()
{
	std::cout << HAname + " attacks with his " + HAwp.getType() << std::endl;
}