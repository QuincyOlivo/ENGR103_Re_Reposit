#include <iostream>
#include <cmath>
using namespace std;

int main() {
	double x = 0;
	double y = 0;
	double z = 0;
	
	cout << "Problem 1 - Type x Value" << endl;
	cin >> x;
	cout << "Problem 1 - Type y Value" << endl;
	cin >> y;
	cout << "Problem 1 - Type z Value" << endl; 
	cin >> z;
	cout << (pow(x, 4)) + (3*(pow(y, 3))) - ((1/2)*(pow(x, 2))) + z - 13 << endl;

	cout << "Problem 2 - Type x Value" << endl;
	cin >> x;
	cout << "Problem 2 - Type y Value" << endl;
	cin >> y;
	cout << (sqrt(x)) + (cbrt(y)) << endl;

	cout << "Problem 3 - Type x Value" << endl;
	cin >> x;
	cout << (floor(log(pow(x, 2)))) << endl;

	cout << "Problem 4" << endl;
	cout << "double a = 5.3;" << endl;
	cout << "int b = ceil(a);" << endl;
	cout << "double = (b / 1371);" << endl;

	cout << "Problem 5" << endl;
	cout << "int x = 7" << endl;
	cout << "int y = (pow(x, 12) + 5)" << endl;
	cout << "int z = (x * y)" << endl;

	cout << "Problem 6" << endl;
	cout << "double a = 5.3" << endl;
	cout << "int b = 12" << endl;
	cout << "double c = sqrt(b)" << endl;
	cout << "double d = (log(b) / log(a)) + c" << endl;
	
	double a = 0;
	double b = 0;
	double c = 0;
	
	cout << "Problem 7" << endl;
	cout << "Type a Value" << endl;
	cin >> a;
	cout << "Type b Value" << endl;
	cin >> b;
	cout << "Type c Value" << endl;
	cin >> c;
	cout << (pow(b, 2) - (4*a*c)) << endl;
	cout << (pow(b, 2) + (4*a*c)) << endl;

	cout << "Problem 8"<< endl;
	cout << "How far (in meters) do you want to go?" << endl;
	cin >> x;
	double f = ((-2.2) - (sqrt(pow(2.2, 2) - (4*5*(20 - x))))) / (2*a);
	double g = ((-2.2) + (sqrt(pow(2.2, 2) - (4*5*(20 - x))))) / (2*a);
	cout << f << endl;
	cout << g << endl;

}
