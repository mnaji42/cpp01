/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Human.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnaji <mnaji@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/19 22:36:24 by mnaji             #+#    #+#             */
/*   Updated: 2020/02/19 23:00:08 by mnaji            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMAN_HPP
# define HUMAN_HPP

#include "Brain.hpp"

class	Human
{
	private:
		Brain Hbrain;

	public:
		Human();
		~Human();
		std::string identify();
		Brain &getBrain();
};

#endif