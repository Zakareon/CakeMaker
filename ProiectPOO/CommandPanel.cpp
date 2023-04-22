#include "CommandPanel.h"

void CommandPanel::showProducts()
{
	std::cout << "Menu:\n";
	std::cout << " 1) Funfetti Cake\n";
	std::cout << " 2) Lemon Cake\n";
	std::cout << " 3) Pineapple Cake\n";
	std::cout << " 4) Red Velvet Cake";
	std::cout << " 5) Cheesecake\n";
	std::cout << " 6) Chocolate Cake\n";
	std::cout << " 7) Apple Cake\n";
	std::cout << " 8) Schwarzwald Cake\n";
	std::cout << " 9) Vanilla Cake\n";
	std::cout << "10) Caramel Crunch Cake\n";
	std::cout << "11) Triple Chocolate Cake\n";
	std::cout << "12) Strawberry Cake\n";

	std::vector<std::string> cakesForSale = { "Funfetti", "Lemon", "Pineapple", "RedVelvet", "Cheesecake", "Chocolate", "Apple", "Schwarzwald", "Vanilla", "CaramelCrunch", "TripleChocolate", "Strawberry" };
	for (int i = 0; i < 12; i++)
	{
		RecipeCake aux(cakesForSale[i], 5);
		menu.push_back(aux);
	}
}
void CommandPanel::selectProduct(std::string name)
{
	std::cout << "Thank you! Please wait 5 seconds, we are almost done making your cake!\n";
	RecipeCake recipeOrdered(name, 5);
	Cake cakeOrdered;
	cakeOrdered = commandTaker.takeCommand(recipeOrdered);
	std::cout << "Your " << name << " cake is ready!\n";
}
void CommandPanel::selectProduct(std::string name, int numberOfProducts)
{
	std::cout << "Thank you! Please wait " << 5 * numberOfProducts << " seconds, we are almost done making your cake!\n";
	RecipeCake recipeOrdered(name, 5);
	std::vector<Cake> cakesOrdered;
	cakesOrdered = commandTaker.takeCommand(recipeOrdered, numberOfProducts);
	std::cout << "Your " << numberOfProducts << " " << name << " cakes are ready!\n";
}
void CommandPanel::showProductsInCarousel()
{
	bool checkCarousel = commandTaker.checkCarouselOfCakes();
	std::vector<Cake> productsInCarousel = commandTaker.getCakesFromCarousel();
	int i;
	std::cout << "Products currently found in Carousel of Cakes: \n";
	for (i = 0; i < productsInCarousel.size(); i++)
		std::cout << productsInCarousel[i].getName() << "\n";
}