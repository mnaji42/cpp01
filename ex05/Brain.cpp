/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnaji <mnaji@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/19 22:35:32 by mnaji             #+#    #+#             */
/*   Updated: 2020/02/19 23:00:33 by mnaji            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"
#include <sstream>

Brain::Brain()
{
	(void)Blatence;
	(void)BNumber;
}

Brain::~Brain()
{

}

std::string Brain::identify()
{
	std::stringstream stream;
    stream << std::hex << std::showbase << (unsigned long)this;
	return (stream.str());
}