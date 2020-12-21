/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnaji <mnaji@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/19 23:35:20 by mnaji             #+#    #+#             */
/*   Updated: 2020/02/20 00:22:25 by mnaji            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef Human_B_hpp
# define Human_B_hpp

# include "Weapon.hpp"

class	HumanB
{
	private:
		std::string HBname;
        Weapon *HBwp;
	
	public:
		HumanB(std::string name);
		~HumanB();
		void attack();
		void setWeapon(Weapon &wp);
};

#endif