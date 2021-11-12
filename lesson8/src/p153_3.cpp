// p153 3
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
			cout<<real<<" + "<<imag<<"i"<<endl;
		}
		Complex operator + (Complex &c2){
			return Complex(real+c2.real,imag+c2.imag);
		}
		Complex operator + (int &c2){
			return Complex(real + c2,imag);
		}
		double real;
		double imag;
};

Complex operator + (int c1,Complex &c2){
	return Complex(c2.real + c1,c2.imag);
}

int main(){
	Complex c1(2,5),c2(3,7);
	int i = 9;
	Complex sum1 = c1 + c2;
	Complex sum2 = i + c1;
	Complex sum3 = c1 + i;
	cout<<"c1 + c2 = ";
	sum1.display();
	cout<<"i + c1 = ";
	sum2.display();
	cout<<"c1 + i = ";
	sum3.display();

	return 0;
}
