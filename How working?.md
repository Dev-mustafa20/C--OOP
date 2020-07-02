# C--OOP
This program that using some of OPP futures of C++ , like : Class with inheritance and Function overloading and overriding 

How working ?? 
Overview the Program 
This program is like a small Database for Small carShow room, that required from the user to add information new car that he wants to add it! Then the program’s show to
user this info that he has added with other cars found already in Data by using difference C++ future. 
Overview the Code 
This program is used in its programming:
•	C++ Class
•	C++ Class Inheritance
•	C++ Function Overloading  
•	C++ Function Overriding
•	Member functions and other C++ variable and std function 
In order to read or write to the standard input/output streams we need to include iostream library 
carShow is a base class, carShow class has four data members, with difference datatype.
access specifiers to Inheritance the data members of the base class is protected , this type allowed accessible from derived class.
In Public, I created a new Member function with double datatype because I want to return a double value of price Data Member from carShow class.
carShowRoom1 is the derived from carShow class.   
The derived class appears with the declaration of a class followed by a colon, the keyword public and the name of base class from which it is derived.
The 2 Functions void infoCar();
are functions Overloading.                             
These functions having the same name but different arguments are known as overloaded functions.
In our program :
void infoCar() with Arguments difference types parameters: 
Used to pass information parameters which in turn give value to class Data Member.
void infoCar() without Arguments parameters:      
Used to in order for the user to add the information and then store it in Data Member in the base class, where the printFunction() then prints the information on the screen.
void printFunction() : 
method to print the information (Data member class) That the user added or the data that is already in the program.
double getprice() :
both base class and derived class have a member function with same name and arguments (number and type of arguments).
in order to access the overridden function of the base class from the our derived class we using here carShow::getprice();
inside getprice() function in derived class 
carShowRoom1 e1, e2, e3 , e4; :
In this step I created an objects from the Derived class. Also, a name must be given to this objects.
In this program there are four objects of the same class are declared.
e1.infoCar(); :
e2.infoCar("BMW", "White", 43000, 290, 1); : 
This will call the infoCar() overloaded function inside the carShowRoom1 class for objects e1 and e2.
overload the function, based on the type of parameter passed during the function call.
e1(or2.3..).printFunction(); :
Here I called the printFunction that prints the information the user added to the object e1 or e2,e3….
"How these functions work is written above!"
e1.getprice() :
I call the getprice() function that return the Price Data member to know the total car prices by summation value of Price of every Object.
int avaPrice = sum / 4; : To know the average car prices.
I print the total prices through cout as well as the average in the same way. 
system("pause"); : Programmer use System("pause") because they want the program to wait until they hit enter to they can see their output.



