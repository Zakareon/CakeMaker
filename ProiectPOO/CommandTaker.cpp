#include "CommandTaker.h"

Cake CommandTaker::takeCommand(RecipeCake recipe)
{
	bool gasit = false;
	int i = 0;
	std::vector<Cake>::iterator it;
	for (it = carousel.storage.begin(); it != carousel.storage.end(); it++)
		if (carousel.storage[i++].getName() == recipe.getName())
			gasit = true;
	if (gasit == true)
		return carousel.getCake(recipe.getName());
	else
		return cakeMaker.takeCommand(recipe);
}
std::vector<Cake> CommandTaker::takeCommand(RecipeCake recipe, int nrOfCakes)
{
	int i;
	std::vector<Cake> MultipleCakesOrdered;
	for (i = 0; i < nrOfCakes; i++)
		MultipleCakesOrdered.push_back(cakeMaker.takeCommand(recipe));
	return MultipleCakesOrdered;

}
Cake CommandTaker::takeCommand(std::string nameOfCake)
{
	return carousel.getCake(nameOfCake);
}
std::vector<Cake> CommandTaker::getCakesFromCarousel()
{
	return carousel.storage;
}
bool CommandTaker::checkCarouselOfCakes()
{
	if (carousel.getCurrentCapacity() >= 3 && carousel.getCurrentCapacity() <= 12)
		return true;
	else
	{
		refillCarousel();
		return true;
	}
}
bool CommandTaker::refillCarousel()
{
	std::vector<std::string> cakesForRefilling = { "Funfetti", "Lemon", "Pineapple", "RedVelvet", "Cheesecake", "Chocolate", "Apple", "Schwarzwald", "Vanilla", "CaramelCrunch", "TripleChocolate", "Strawberry" };
	std::vector<std::string>::iterator it;
	int freeSpace = 12 - carousel.storage.size(), i = 0;
	for (it = cakesForRefilling.begin(); it != cakesForRefilling.end() && i < freeSpace; it++)
	{
		Cake cakeToAdd(cakesForRefilling[i]);
		i++;
		carousel.addCake(cakeToAdd);
	}
	return true;
}
