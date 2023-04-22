#include "CarouselOfCakes.h"

bool CarouselOfCakes::addCake(Cake cake)
{
	if (storage.size() < maxCapacity)
	{
		storage.push_back(cake);
		return true;
	}
	else
		return false;
}
Cake CarouselOfCakes::getCake(std::string name)
{
	for (int i = 0; i < storage.size(); i++)
	{
		if (storage[i].getName() == name)
		{
			Cake aux = storage[i];
			storage.erase(storage.begin() + i);
			return aux;
		}
	}
}
int CarouselOfCakes::getCurrentCapacity()
{
	return storage.size();
}
