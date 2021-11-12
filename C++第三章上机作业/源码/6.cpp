#include <iostream>
using namespace std;
class Box{
	public:
		Box(int w,int len){
			width = w;
			length = len;
		}
		int volume(){
			return(height * width * length);
		}
		static int height;
		int width;
		int length;
};

int Box::height = 10;
int main(){
	Box a(15,20),b(20,30);
	cout<<a.volume()<<endl;
	cout<<b.volume()<<endl;
	return 0;
}
