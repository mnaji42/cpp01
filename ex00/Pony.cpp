#include "Pony.hpp"

void	Pony::jump()
{
	std::cout << "Hiiiiiiii !! || " << this << std::endl;
}

void	Pony::run()
{
	std::cout << "Cataclop cataclop !! || " << this << std::endl;
}

void	Pony::speakInThePonysEars(std::string order)
{
	if (order == "jump")
		Pony::jump();
	if (order == "run")
		Pony::run();
	else
		std::cout << "?? || " << this << std::endl;
}

Pony	ponyOnTheStack()
{
	Pony	p;

	std::cout << "pony create on the stack, it will delete automaticly ;)" << std::endl;
	return (p);
}

Pony	*ponyOnTheHeap()
{
	Pony	*p = new Pony();

	std::cout << "Pony create on the heap don't forget to delete it !" << std::endl;
	return (p);
}

Pony::Pony()
{
	std::cout << "Construction du poney || " << this << std::endl;
}

Pony::~Pony()
{
	std::cout << "Destruction du pony || " << this << std::endl;
}