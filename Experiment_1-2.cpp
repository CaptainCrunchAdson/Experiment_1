#include <iostream>
#include <conio.h>
#include <iomanip> 

using namespace std;

int main()
{

int Mass;
cout << "Enter Mass in grams: " << endl;
cin >> Mass;
cout << Mass << " grams" << endl;

int Density;
cout << "\nEnter Density in grams per cubic centimeters: " << endl;
cin >> Density;
cout << Density << " g/cm^3" << endl;

double Volume;
Volume = (0.25 / Mass) * Density;
cout << fixed << showpoint;
cout << setprecision(2);
cout << "\nThe Volume is " << Volume << " cm^3" << endl;

_getch();
return 0;
}

