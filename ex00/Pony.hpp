#ifndef PONY_HPP
# define PONY_HPP

# include <iostream>

class	Pony
{
	private:
		std::string	name;
		std::string	owner;
	public:
		Pony();
		~Pony();
		void	jump();
		void	run();
		void	speakInThePonysEars(std::string order);
};

Pony	ponyOnTheStack();
Pony	*ponyOnTheHeap();

#endif