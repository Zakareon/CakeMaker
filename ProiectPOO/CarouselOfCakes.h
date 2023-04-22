#pragma once

#include "Cake.h"
#include <string>
#include <vector>

class CarouselOfCakes
{
private:
	unsigned int maxCapacity = 12;
	unsigned int lowLimit = 3;
public:
	std::vector<Cake> storage;
	CarouselOfCakes(){}
	bool addCake(Cake cake);
	Cake getCake(std::string name);
	int getCurrentCapacity();
};

