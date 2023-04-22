#include "CommandPanel.h"

using namespace std;

int main()
{
	CommandPanel user;
	CommandTaker CT;
	
	cout << " -- Please select an option below --\n\n";
	cout << "0) Exit\n";
	cout << "1) Show list of products\n";
	cout << "2) Select a product\n";
	cout << "3) Select a product multiple times\n";
	cout << "4) Show list of products in Carousel of Cakes\n\n";

	int userOption;
	bool keepRunning = true;
	while (keepRunning)
	{
		cout << "Your option: "; cin >> userOption;
		switch (userOption)
		{
			case 0:
			{
				keepRunning = false;
				break;
			}
			case 1:
			{
				user.showProducts();
				cout << "\n";
				keepRunning = true;
				break;
			}
			case 2:
			{
				string cakeToSelect;
				cout << "Enter the name of the product you'd like to get: ";
				cin >> cakeToSelect;
				user.selectProduct(cakeToSelect);
				cout << "\n";
				keepRunning = true;
				break;
			}
			case 3:
			{
				string cakeToSelect;
				cout << "Enter the name of the product you'd like to get: ";
				cin >> cakeToSelect;
				int amount;
				cout << "Enter the amount of the products you'd like to get: ";
				cin >> amount;
				user.selectProduct(cakeToSelect, amount);
				cout << "\n";
				keepRunning = true;
				break;
			}
			case 4:
			{
				if(CT.checkCarouselOfCakes())
					user.showProductsInCarousel();
				cout << "\n";
				keepRunning = true;
				break;
			}
			default:
			{
				cout << "Invalid option. Please select again.\n\n";
				keepRunning = true;
				break;
			}
		}
	}
	return 0;
}