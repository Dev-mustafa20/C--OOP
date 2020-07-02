//Code by Mustafa Jawad
#include<iostream>
#include<string>
using namespace std;
//Base class.
class carShow {
protected:
	double price;
	int numCar;
	int speed;
	string carName;
	string carColor;
public:
	//Member functions.
	double getprice() {
		return price;
	}
};
//Derived class.
class carShowRoom1 : public carShow {
public:
	// Add two Function Overloading <infoCar>
	void infoCar(string n, string c, double p, int s, int num) {
		price = p;
		speed = s;
		carName = n;
		carColor = c;
		numCar = num;
		cout << "Car that already recorded, number: " << numCar << "\n"
			<< "------------------------------\n";
	}
	void infoCar() {
		cout << "Enter the New Car information \n";
		cout << "Enter the car name?\n"; cin >> carName;
		cout << "Enter the car color?\n"; cin >> carColor;
		cout << "Enter the car price?(in dollar)\n"; cin >> price;
		cout << "Enter the car speed average?\n"; cin >> speed;
		cout << "\n" << "Car information recently added\n" << "--------------------\n";
	} // Data printing function.
	void printFunction() {
		cout << "Car name : " << carName << "\n" << "- Car price : " << price << "$"
			<< "\n" << "- car speed: " << speed << "km/h" << "\n" << "- Car color: "
			<< carColor << endl;
		cout << "--------------------------\n";
	}
	double getprice() {
		//Using Function Overriding.
		return carShow::getprice();
	}
};
void main() {
	//create objects of Derived class
	carShowRoom1 e1, e2, e3, e4;
	e1.infoCar();
	e1.printFunction();
	e2.infoCar("BMW", "White", 43000, 290, 1);
	e2.printFunction();
	e3.infoCar("KIA", "Red", 28000, 220, 2);
	e3.printFunction();
	e4.infoCar("GMC", "Black", 55000, 210, 3);

		e4.printFunction();
	int sum = e1.getprice() + e2.getprice() + e3.getprice() + e4.getprice();
	int avaPrice = sum / 4;
	cout << "Totalprices for all cars : " << sum << "$" << endl;
	cout << "Average price of cars : " << avaPrice << "$" << endl;
	system("pause");
}