/*3. WAP with a mother class animal. Inside it define a name and an age variables, and set_value() function. Then create two bases variables Zebra and Dolphin which write a message telling the age,
 the name and giving some extra information (e.g. place of origin).*/

#include<iostream>
using namespace std;
class Animal{
	public:
		int age;
		char name[25];
		void set_values(int age,char name){
			this->age=age;
			this->name[25]=name;
		}
		void get_values(){
			cout<<"I am "<<name<<" & I am "<<age<<" old."<<endl;
		}
};
class Zebra : public Animal{
	public:
		char place[25];
		char type[25];
		void ZebraInput(){
			cout<<"Enter Zebra's Age : ";
			cin>>age;
			cout<<"Enter Zebra's Name : ";
			cin>>name;
			cout<<"Enter Zebra's Origin Place : ";
			cin>>place;
			cout<<"Enter Zebra's Food Type : ";
			cin>>type;
		}
		void ZebraOutput(){
			get_values();
			cout<<"Zebra's Origin Place is : "<<place<<" And It is "<<type<<endl;
		}
};
class Dolphin : public Animal{
	public:
		char place;
		char type;
		void DolphinInput(){
			cout<<"Enter Dolphin's Age : ";
			cin>>age;
			cout<<"Enter Dolphin's Name : ";
			cin>>name;
			cout<<"Enter Dolphin's Origin Place : ";
			cin>>place;
			cout<<"Enter Dolphin's Food Type : ";
			cin>>type;
		}
		void DolphinOutput(){
			get_values();
			cout<<"Dolphin's Origin Place is : "<<place<<" And It is "<<type<<endl;
		}
};
int main(){
	Zebra z;
	Dolphin d;
	z.ZebraInput();
	z.ZebraOutput();
	d.DolphinInput();
	d.DolphinOutput();
}
