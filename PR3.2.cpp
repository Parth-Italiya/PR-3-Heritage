#include<iostream>
using namespace std;

class Mother{
	
	public:
		
		void Display(){
			cout<<"This is Mother Class"<<endl;
			
		}
};
class Daughter : public Mother{
	
	public:
		
		void Display(){
			
			cout<<"this is daughter class"<<endl;
			
		}
};

int main(){
	
	Daughter d1;
	d1.Mother::Display();
	d1.Display();
	
	return 0;
	
}
