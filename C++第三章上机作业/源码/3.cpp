#include <iostream>
using namespace std;
template <class T>
class Compare{
	public:
		Compare(T a,T b){
			x = a;
			y = b;
		}
		T Max(){
			return (x>y)?x:y;
		}
		T Min(){
			return (x<y)?x:y;
		}
	private:
		T x,y;
};

int main(){
	Compare <int> cmp1(3,7);
	cout<<cmp1.Max()<<endl;
	cout<<cmp1.Min()<<endl<<endl;
	
	Compare <float> cmp2(46.7,98.5);
	cout<<cmp2.Max()<<endl;
	cout<<cmp2.Min()<<endl<<endl;
	
	Compare <char> cmp3('A','a');
	cout<<cmp3.Max()<<endl;
	cout<<cmp3.Min()<<endl<<endl;
	
	return 0;
}
