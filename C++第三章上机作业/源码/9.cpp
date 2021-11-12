#include <iostream>
using namespace std;
class Box{
	public:
		Box(int,int,int);
		int volume();
		private:
			int height;
			int width;
			int length;
};

Box::Box(int h,int w,int len){
	height = h;
	width = w;
	length = len;
}

int Box::volume(){
	return (height*width*length);
}

int main(){
	Box box1(12,25,30);
	Box box2(15,20,21);
	cout<<box1.volume()<<endl;
	cout<<box2.volume()<<endl;
	return 0;
}
