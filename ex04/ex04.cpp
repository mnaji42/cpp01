/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ex04.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnaji <mnaji@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/19 22:32:23 by mnaji             #+#    #+#             */
/*   Updated: 2020/02/19 22:33:38 by mnaji            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main()
{
    std::string s = "HI THIS IS BRAIN";
    std::string *ptr = &s;
    std::string &ref = s;

    std::cout << *ptr << std::endl;
    std::cout << ref << std::endl;
}
