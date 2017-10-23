#include <iostream>
using namespace std;
int num = 0;
int number_of_quarters;
double amount_in_dollars;
double total_cost = 0;
double change = 0;
void drink_menu();
void snack_menu();

/***************************************  MAIN MENU  *********************************************/

void main_menu()
{
	int select_category = 0;
	int flag = 0;
	while (select_category != 1 && select_category != 2) {	
		if (flag == 0) {
			cout << "------------------------------------------------------" << endl;
			cout << "Select Category:" << endl;
			cout << "1. Drinks" << endl;
			cout << "2. Snacks" << endl;
			cout << "3. Exit" << endl;
			cout << "Select an option: ";
			cin >> select_category;
		}
		else
		{
			system("pause");
		}
		switch (select_category)
		{
			case 1:
				drink_menu();
				break;
			case 2:
				snack_menu();
				break;
			case 3:
				cout << "Paid Amount: " << amount_in_dollars << " , total purchase: " << total_cost << " , change: " << change << endl;
				flag = 1;
				break;
			default:
				cout << "Invalid Selection" << endl;
				break;
		}
	 }
}

/*************************************** MAIN MENU END  *********************************************/

/***************************************  Drink Menu  *********************************************/

void drink_menu()
{
	char drink_selection = ' ';
	while (drink_selection != 'x')
	{
		cout << "-------------------------------------------------" << endl;
		cout << " s -  Soda ($1.5) " << endl;
		cout << " j - Juice ($3) " << endl;
		cout << " w - Water ($1)" << endl;
		cout << "Enter your drinks selection ( x to exit ): ";

		cin >> drink_selection;

		switch (drink_selection)
		{
		case 's':
			if (change >= 1.5)
			{

				total_cost += 1.5;
				change = amount_in_dollars - total_cost;
				cout << "Vending: Soda , you have $ " << change << " left" << endl;
				break;
			}
			else {
				cout << "You dont have enough money to buy Soda" << endl;
				break;
			}
		case 'j':
			if (change >= 3) {
				total_cost = total_cost + 3;
				change = amount_in_dollars - total_cost;
				cout << "Vending: Juice , you have $ " << change << " left" << endl;
				break;
			}
			else {
				cout << "You dont have enough money to buy Juice" << endl;
				break;
			}
		case 'w':
			if (change >= 1)
			{
				total_cost = total_cost + 1;
				change = amount_in_dollars - total_cost;
				cout << "Vending: Water, you have $ " << change << " left" << endl;
				break;
			}
			else
			{
				cout << "You dont have enough money to buy Water" << endl;
				break;
			}
		case 'x':
			main_menu();
			break;
		default:
			cout << "Invalid Selection" << endl;
			break;
		}
		drink_menu();
	}
}

/***************************************  Drink Menu End  *********************************************/


/***************************************  Drink Menu Start *********************************************/

void snack_menu() {
	char snack_selection = ' ';

	while (snack_selection != 'x') {
		cout << "-------------------------------------------------" << endl;
		cout << " c - Chips ($1.25) " << endl;
		cout << " p - Peanuts ($0.75) " << endl;
		cout << " e - Cookie ($1.00) " << endl;
		cout << "Enter your drinks selection ( x to exit ): ";
		cin >> snack_selection;

		switch (snack_selection)
		{
		case 'c':
			if (change >= 1.25)
			{
				total_cost = total_cost + 1.25;
				change = amount_in_dollars - total_cost;
				cout << "Vending: Chips , you have $ " << change << " left" << endl;
				break;
			}
			else {
				cout << "You dont have enough money to buy Chips" << endl;
				break;
			}
		case 'p':
			if (change >= 0.75) {
				total_cost = total_cost + 0.75;
				change = amount_in_dollars - total_cost;
				cout << "Vending: Peanuts , you have $ " << change << " left" << endl;
				break;
			}
			else {
				cout << "You dont have enough money to buy Peanuts" << endl;
				break;
			}
		case 'e':
			if (change >= 1)
			{
				total_cost = total_cost + 1;
				change = amount_in_dollars - total_cost;
				cout << "Vending: Cookie, you have $ " << change << " left" << endl;
				break;
			}
			else
			{
				cout << "You dont have enough money to buy Water" << endl;
				break;
			}
		case 'x':
			main_menu();
			break;
		default:
			cout << "Invalid Selection" << endl;
			break;
		}
		snack_menu();
	}
}


/***************************************  Snack Menu End  *********************************************/

int main() 
{
	
	cout << "Welcome to the UB Vending Machine" << endl;
	cout << "Enter the number of quarters you wish to insert : ";
	cin >> number_of_quarters;

	amount_in_dollars = number_of_quarters * 0.25;
	change = amount_in_dollars - total_cost;
	cout << "You entered " << amount_in_dollars << " dollars" << endl;

	main_menu();
	system("pause");
	return 0;
}