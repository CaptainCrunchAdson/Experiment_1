#include <iostream>
#include <conio.h>
#include <iomanip>

using namespace std;

int main()
{
	int GenAd;
	cout << "Enter number of tickets sold for General Admission Seats: ";
	cin >> GenAd;

	int Premium;
	cout << "\nEnter number of tickets sold for Premium Seats: ";
	cin >> Premium;

	int Sideline;
	cout << "\nEnter number of tickets sold for Sideline Seats: ";
	cin >> Sideline;

	int Box;
	cout << "\nEnter number of tickets sold for Box Seats: ";
	cin >> Box;

	cout << "\nticketPrice						numberOfTicketsSold" << endl; 
	cout << "  " << "$" << 25 << "								" << GenAd << endl;
	cout << "  " << "$" << 50 << "								" << Premium << endl;
	cout << "  " << "$" << 100 << "								" << Sideline << endl;
	cout << "  " << "$" << 250 << "								" << Box << endl;

	double Total;
	Total = (GenAd * 25) + (Premium * 50) + (Sideline * 100) + (Box * 250);
	cout << fixed << showpoint;
cout << setprecision(2);
	cout << "\nTotal Tickets Sold for the Game: " << GenAd + Premium + Sideline + Box << endl;
	cout << "\nTotal Sale from Tickets Sold from the Game: " << "$" << Total << endl;
		



	_getch();
	return 0;
}
		
	