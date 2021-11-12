// p153 2
#include <iostream>
using namespace std;

class Complex{
	public:
		Complex(){
			real = 0;
			imag = 0;
		}
		Complex(double r,double i){
			real = r;
			imag = i;
		}
		void display(){
			cout<<real<<"+"<<imag<<"i"<<endl;
		}
		Complex operator + (Complex &c2){
			return Complex(real+c2.real,imag+c2.imag);
		}
		Complex operator - (Complex &c2){
			return Complex(real-c2.real,imag-c2.imag);
		}
		Complex operator * (Complex &c2){
			double a = real,b = imag,c = c2.real,d = c2.imag;
			return Complex(a*c-b*d,a*d+b*c);
		}
		Complex operator / (Complex &c2){
			double a = real,b = imag,c = c2.real,d = c2.imag;
			return Complex(a/c,b/d);
		}
		double real;
		double imag;
};

int main(){
	Complex c1(50,20),c2(1,6);
	Complex c3 = c1 + c2;
	Complex c4 = c1 - c2;
	Complex c5 = c1 / c2;
	Complex c6 = c1 * c2;
	c3.display();
	c4.display();
	c5.display();
	c6.display();
	return 0;
}



