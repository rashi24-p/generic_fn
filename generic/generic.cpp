#include<iostream>
using namespace std;

template<typename T>//T is s generic datatype,it is allow for all datatype.This is applicable for all datatype such as bool,float,double float.
void Swap(T& a, T& b) {
	T temp = a;
	a = b;
	b = temp;
}
int main() {

	int a = 5, b = 7; 
	cout << a << " - " << b << endl;//in this integer swap,the output will be a=b;b=a.....means 5=7;7=5
	Swap<int>(a, b);
	cout << a << " - " << b << endl;

	char c = 'c', d = 'd';
	cout << c<< " - " << d<< endl;//in this char swap ,the output wil be c=d;d=c.
	Swap<char>(c, d);
	cout << c<< " - " << d << endl;
	system("pause>0");
	return 0;
}