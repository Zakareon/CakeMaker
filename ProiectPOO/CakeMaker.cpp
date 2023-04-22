#include "CakeMaker.h"

Cake CakeMaker::takeCommand(RecipeCake recipe)
{
	Cake c1(recipe.getName());
	return c1;
}