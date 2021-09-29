// P35 13
#include <iostream>
using namespace std;

void sort(int a[]){
	int i,j,t;
	for(j =0;j<4;j++)
	  	for(i = 0;i<4-j;i++)
	  		if(a[i]>a[i+1]){
	  			t = a[i];
	  			a[i]=a[i+1];
	  			a[i + 1] = t;
			  }
	cout<<"the sorted numbers(int): "<<endl;
	for(i=0;i<5;i++)
		cout<<a[i]<<" ";
	cout<<endl;
}

void sort(float a[]){
	int i,j;
	float t;
	for(j =0;j<4;j++)
	  	for(i = 0;i<4-j;i++)
	  		if(a[i]>a[i+1]){
	  			t = a[i];
	  			a[i]=a[i+1];
	  			a[i + 1] = t;
			  }
	cout<<"the sorted numbers(float): "<<endl;
	for(i=0;i<5;i++)
		cout<<a[i]<<" ";
	cout<<endl;
}

void sort(long a[]){
	int i,j,t;
	for(j =0;j<4;j++)
	  	for(i = 0;i<4-j;i++)
	  		if(a[i]>a[i+1]){
	  			t = a[i];
	  			a[i]=a[i+1];
	  			a[i + 1] = t;
			  }
	cout<<"the sorted numbers(long): "<<endl;
	for(i=0;i<5;i++)
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
