/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieEvent.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnaji <mnaji@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/19 17:39:52 by mnaji             #+#    #+#             */
/*   Updated: 2020/02/19 18:39:34 by mnaji            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_EVENT_HPP
# define ZOMBIE_EVENT_HPP
# include "Zombie.hpp"

class	ZombieEvent
{
	private:
		std::string ZEtype;
	
	public:
		ZombieEvent();
		~ZombieEvent();
		void advert();
		void setZombieType(std::string type);
		Zombie *newZombie(std::string name);
		void randomChump();
};

#endif 