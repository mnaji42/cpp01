/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnaji <mnaji@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/19 23:32:39 by mnaji             #+#    #+#             */
/*   Updated: 2020/02/20 00:42:01 by mnaji            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(std::string type)
{
	Wtype = type;
}

Weapon::~Weapon()
{

}

const std::string &Weapon::getType()
{
	return (Wtype);
}

void Weapon::setType(std::string type)
{
    this->Wtype = type;
}