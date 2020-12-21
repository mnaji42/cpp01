#include "Pony.hpp"

int		main()
{
	Pony	*p1 = ponyOnTheHeap();
	std::cout << "Step1" << std::endl;
	Pony	p2 = ponyOnTheStack();
	std::cout << "Step2" <<std::endl;

	p1->speakInThePonysEars("jump");
	std::cout << "Step3" << std::endl;
	p2.speakInThePonysEars("run");
	std::cout << "Step4" <<std::endl;
	p1->speakInThePonysEars(":O");
	std::cout << "Step5" <<std::endl;
	delete p1;
	std::cout << "Step6" <<std::endl;
	return (0);
}