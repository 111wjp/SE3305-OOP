//4、利用类模板，分别求出两个整数、浮点数和字符的最大值和最小值。
#include <iostream>
using namespace std;
template <class T>
class fun{
	public:
		fun(T a,T b){
			num1 = a;
			num2 = b;
		}
		T max(){
			T max;
			if(num1 > num2)
				max = num1;
			else
				max = num2;
			cout<<"the max of two numbers is "<<max<<endl;
		};
		T min(){
			T min;
			if(num1 < num2)
				min = num1;
			else
				min = num2;
			cout<<"the min of two numbers is "<<min<<endl;
		};
	private:
		T num1;
		T num2;
};

int main(){
	fun <int> _int(12,46);
	fun <float> _float(34.567,23.456);
	fun <char> _char('a','A');

	_int.max();
	_int.min();
	cout<<endl;

	_float.max();
	_float.min();
	cout<<endl;
	
	_char.max();
	_char.min();
	cout<<endl;
	return 0;
	
}


