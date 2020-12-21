/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnaji <mnaji@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/19 23:32:51 by mnaji             #+#    #+#             */
/*   Updated: 2020/02/20 00:41:56 by mnaji            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
# define WEAPON_HPP

# include <iostream>

class	Weapon
{
	private:
		std::string Wtype;

	public:
		Weapon(std::string type);
		~Weapon();
		const std::string &getType();
		void setType(std::string type);
};

#endif