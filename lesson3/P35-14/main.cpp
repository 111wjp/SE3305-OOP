// P35-14
#include <iostream>
#include <string>
using namespace std;

template <typename T>
void sort(T a[]){
	int i,j;
	T t;
	for(i = 0 ;i < 5;i ++)
		for(j = i + 1;j < 5;j++)
			if(a[i]>a[j]){
				t = a[i];
				a[i] = a[i + 1];
				a[i + 1] = t;
 			}
 	cout<<"the sorted numbers:"<<endl;
 	for(i = 0 ; i<5;i++)
 		cout<<a[i]<<" ";
 	cout<<endl;
}

int main(){
	int a[5] = {34,56,234,56,12};
	float b[5] = {2.4,4.5,7.9,4.6,2.1};
	long c[5] = {124324,23543,124324,12335,45645};
	sort(a);
	sort(b);
	sort(c);
	
	return 0;
}
