/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnaji <mnaji@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/19 23:34:04 by mnaji             #+#    #+#             */
/*   Updated: 2020/02/20 00:53:09 by mnaji            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMAN_A_HPP
# define HUMAN_A_HPP

# include <iostream>
# include "Weapon.hpp"

class	HumanA
{
	private:
		std::string HAname;
        Weapon &HAwp;
	
	public:
		HumanA(std::string name, Weapon &wp);
		~HumanA();
		void attack();
};

#endif