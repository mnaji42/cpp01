/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnaji <mnaji@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/20 00:56:21 by mnaji             #+#    #+#             */
/*   Updated: 2020/02/20 02:21:12 by mnaji            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "replace.hpp"

int	error(std::string msg)
{
	std::cout << "ERROR : " + msg << std::endl;
	return (0);
}

int main(int argc, char **argv)
{
	if (argc == 4)
	{
		std::string file = argv[1];
		std::string s1 = argv[2];
		std::string s2 = argv[3];
		std::ifstream fluxFile(file.c_str());
		if (!fluxFile)
			return (error("Impossible to open the file"));
		std::string New_file = file + ".replace";
		std::ofstream fluxNewFile(New_file.c_str(), std::ios::app);
		std::string line;
		while (getline(fluxFile, line))
		{
			while (line.find(s1) != std::string::npos)
				line.replace(line.find(s1), s1.length(), s2);
			fluxNewFile << line << std::endl;
		}
		fluxFile.close();
		fluxNewFile.close();
		return (1);
	}
	std::cout << "Usage : ./replace [path_file] [string_to_replace] [relpacing_chaine]" << std::endl;
	return (0);
}