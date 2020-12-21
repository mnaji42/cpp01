/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieHorde.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnaji <mnaji@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/19 21:09:36 by mnaji             #+#    #+#             */
/*   Updated: 2020/02/19 22:17:04 by mnaji            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HORDE_CPP
# define ZOMBIE_HORDE_CPP

# include "Zombie.hpp"

class	ZombieHorde
{
	private:
		Zombie *ZHz;
		int		ZHn;

	public:
		ZombieHorde();
		ZombieHorde(int n);
		~ZombieHorde();
		void announce();

};

#endif