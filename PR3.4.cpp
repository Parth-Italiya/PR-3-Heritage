/*
4. WAP to read and print employee information using multiple inheritance.

*/

#include<iostream>
using namespace std;

class Name {
	private :
		
		char name[30];
		
		public :
			
			void name1(){
				cout<<"enter employee's name:-";
				cin>>name;
			}
			
			void name2(){
				cout<<"The employee's name is :"<<name<<endl;
				
			}
			
	};

class Id {
	
	private :
		
		int id;
		
		public :
			
			void id1(){
				cout<<"enter employee's id:-";
				cin>>id;
			}
			
			void id2(){
				cout<<"employee's id is :"<<id<<endl;
				
			}
			
	};
		
class Age {
	
	private :
		
		int age;
		
		public :
			
			void age1(){
				cout<<"enter employee's age:-";
				cin>>age;
			}
			
			void age2(){
				cout<<"employee's age is :"<<age<<endl;
				
			}
	};
	
class City:public Name,public Id,public Age
{
	private :
		
		char city[30];
		
		public :
			
			void city1(){
				cout<<"enter employee's city:-";
				cin>>city;
			}
			
			void city2(){
				cout<<"employee's city is :"<<city<<endl;
				
			}
			
	};
	
	int main(){
		City c1;
		c1.name1();
		c1.name2();
		c1.id1();
		c1.id2();
		c1.age1();
		c1.age2();
		c1.city1();
		c1.city2();
		
	}
