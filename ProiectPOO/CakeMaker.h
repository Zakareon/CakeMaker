#pragma once

#include "RecipeCake.h"
#include "Cake.h"
#include <string>

class CakeMaker
{
public:
	CakeMaker(){}
	Cake takeCommand(RecipeCake recipe);
};