#pragma once

#include "CommandTaker.h"
#include <iostream>
#include <string>
#include <list>


class CommandPanel
{
private:
	std::list<RecipeCake> menu;
	CommandTaker commandTaker;
public:	
	void showProducts();
	void selectProduct(std::string name);
	void selectProduct(std::string name, int numberOfProducts);
	void showProductsInCarousel();
};

