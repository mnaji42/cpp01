/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnaji <mnaji@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/19 17:39:49 by mnaji             #+#    #+#             */
/*   Updated: 2020/02/19 21:40:27 by mnaji            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP
# include <iostream>

class	Zombie
{
	private:
		std::string Ztype;
		std::string Zname;

	public:
		Zombie();
		Zombie(std::string type, std::string name);
		Zombie(std::string name);
		~Zombie();
		void add_to_horde(std::string name);
		void advert();
		void announce();
};

std::string randomName();

#endif