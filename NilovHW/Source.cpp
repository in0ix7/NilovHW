#include <iostream>
#include <stdlib.h>
#include <string>
#include <time.h>
#include <iomanip>  // чтобы работал precision
#include <math.h>  // функции модуля числа, синуса, косинуса и прочее здесь
#include <cmath>  

using namespace std; //автоприменение std
using std::cout;
using std::cin;
using std::endl;


int main() {
	cout << "           AiP       " << endl
		<< "  Homework 07/03/2020" << endl
		<< "      Kozevnikov Ilya" << endl
		<< "                  #7 " << endl
		<< "                     " << endl;




	//Задача 1

	/* cout << "*     **" << endl
		 << "*    * *" << endl
		 << "*   *  *" << endl
		 << "*  *   *" << endl
		 << "* *    *" << endl
		 << "**     *" << endl;

	 getchar();
	 getchar();*/






	 //Задача 2(g)/ Конус

  /*float R,L,h,Sbok,Spoln,V
	 cin >> R >>
		 L >>
		 h;
	Sbok =(float) 3.14 * R * L;
	Spoln =(float) 3.14 * (R * L + R * R);
	V = (float)1 / 3 * 3.14 * R * R * h;
	cout << "Spoln=" << Spoln << endl
		<< "Sbok=" << Sbok << endl
		<< "V=" << V << endl;*/





		//Задача 5

	 /* float a,b,c, amount;

		cin >> a >>
			b >>
			c;
		cout << "until :" << endl
			<< "a=" << a << endl
			<< "b=" << b << endl
			<< "c=" << c << endl;
		a = 2 * a;
		b = b - 3;
		c = c * c;
		amount = a + b + c;

		cout << "            " <<endl
			<< "after :" << endl
			<< "a=" << a << endl
			<< "b=" << b << endl
			<< "c=" << c << endl
			<< "amount=" << amount << endl;*/






			//Задача 8(A)

		   /*float a, b,amount;


		   a = 2;
		   b = 3;
		   amount = (a + 4 * b) * (a - 3 * b) + a * a;
		   cout << "            " <<endl
			   << "the initial conditions :" << endl
			   << "a=" << a << endl
			   << "b=" << b << endl
			   << "            " << endl
			   << "amount=" << amount << endl
			   << "            " << endl
			   << "Answer:     " << amount << endl;*/





			   //Задача 9(G)

	float N, V1, V2, V3;

	cout << "speed(turn/min): ";
	cin >> N;
	cout << "           " << endl;
	V1 = 2 * 3.14 * N;
	V2 = V1 * 3.14 / 180;
	V3 = V2 * 60;

	cout << "+--------------------+-------------------+-------------------+" << endl
		<< "|      rad/min       |     degree/min    |     degree/hour   |" << endl
		<< "+--------------------+-------------------+-------------------+" << endl
		<< "|       " << V1
		<< "         |     " << V2
		<< "       |       " << V3
		<< "     |" << endl
		<< "+--------------------+-------------------+-------------------+" << endl;




	//Задача 10

/* float a,b,c,Max;


 cout << "Number1=";
cin >> a;

 cout<<endl << "Number2=";
cin >> b;

cout << endl << "Number3=";
cin >> c;

switch (a > b) {
case 1:
	Max =(float) a;
	break;
case 0:
	Max =(float) b;
	break;
}
switch (Max < c) {
case 1:
	Max =(float) c;
	break;
case 0:
	break;
}
cout << "Max number - " << Max << endl;*/


	return 0;
}