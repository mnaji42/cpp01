/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Human.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnaji <mnaji@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/19 22:35:39 by mnaji             #+#    #+#             */
/*   Updated: 2020/02/19 23:00:56 by mnaji            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Human.hpp"

Human::Human()
{

}

Human::~Human()
{

}

std::string Human::identify()
{
	return (Hbrain.identify());
}

Brain &Human::getBrain()
{
    return Hbrain;
}