/*
5. WAP to demonstrate example of hierarchical inheritance to get square and cube of a number.
*/

#include<iostream>
using namespace std;
class TakeNumber{
	public:
		int num;
		void TakeInput(){
			cout<<"Enter Number : ";
			cin>>num;
		}
};
class SquareNum : public TakeNumber{
	public:
		void Square(){
			TakeInput();
			cout<<"The Square of Number "<<num<<" is "<<num*num<<endl;
		}
};
class CubeNum : public TakeNumber{
	public:
		void Cube(){
			TakeInput();
			cout<<"The Cube of Number "<<num<<" is "<<num*num*num<<endl;
		}
};
int main(){
	CubeNum c;
	SquareNum s;
	s.Square();
	c.Cube();
	return 0;
}
