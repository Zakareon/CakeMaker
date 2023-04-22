#pragma once

#include "CarouselOfCakes.h"
#include "CakeMaker.h"

class CommandTaker
{
private:
	RecipeCake carouselRecipe;
	CakeMaker cakeMaker;
	CarouselOfCakes carousel;
public:
	CommandTaker(){}
	Cake takeCommand(RecipeCake recipe);
	std::vector<Cake> takeCommand(RecipeCake recipe, int nrOfCakes);
	Cake takeCommand(std::string nameOfCake);
	std::vector<Cake> getCakesFromCarousel();
	bool checkCarouselOfCakes();
	bool refillCarousel();
};

