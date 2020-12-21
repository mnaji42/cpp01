/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnaji <mnaji@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/19 21:10:57 by mnaji             #+#    #+#             */
/*   Updated: 2020/02/19 22:30:24 by mnaji            ###   ########.fr       */
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

#endif