#include <iostream>
using namespace std;
class Box{
	public:
		Box(int h = 10,int w = 10,int len = 10){
			height = h;
			width = w;
			length = len;
		}
		int volume(){
			return (height*width*length);
		}
		private:
			int height;
			int width;
			int length;
};

int main(){
	Box box1 = (15,30,20),
	box2 = (23,41,18);
	cout<<box1.volume()<<endl;
	cout<<box2.volume()<<endl;
	return 0;
}
