/*
6. WAP to read and print employee information with use of multilevel inheritance. (as like in below image)
Output:
Enter Number of Employee Details you want : 1
Enter Details of Employee 1
Enter ID : 1
Enter Name : amn
Enter Role : 1
Enter Salary : 5500
Enter Experience : 30
Enter Company Name : reliance
Enter Address : mumbai
Enter Email : amn@gmail.com
Enter Phone Number : 5020105040
Details of Employee 1
Employee ID is : 1
Employee Name is : amn
Employee Role is : 1
Employee Salary is : 5500
Employee Experience is : 30
Employee Company Name is : reliance
Employee Address is : mumbai
Employee Email is : amn@gmail.com
Employee Phone Number is : 5020105040
*/

#include<iostream>
using namespace std;
class A{
	public:
		int id;
		char name[25];
		char role[25];
		int salary;
		int exp;
		char comp_name[25];
		char address[25];
		char email[25];
		long long int contact;
		void SetValues(){
			cout<<"Enter ID : ";
			cin>>id;
			cout<<"Enter Name : ";
			cin>>name;
			cout<<"Enter Role : ";
			cin>>role;
		}
};
class B : public A{
	public:
		void SetValues2(){
			cout<<"Enter Salary : ";
			cin>>salary;
			cout<<"Enter Experience : ";
			cin>>exp;
		}
};
class C : public B{
	public:
		void SetValues3(){
			cout<<"Enter Company Name : ";
			cin>>comp_name;
			cout<<"Enter Address : ";
			cin>>address;
		}
		void GetValues(){
			cout<<"Employee Name is : "<<name<<endl;
			cout<<"Employee Role is : "<<role<<endl;
			cout<<"Employee Salary is : "<<salary<<endl;
		}
};
class D : public C{
	public:
		void SetValues4(){
			cout<<"Enter Email : ";
			cin>>email;
			cout<<"Enter Phone Number : ";
			cin>>contact;
		}
		void GetValues2(){
			cout<<"Employee ID is : "<<id<<endl;
			cout<<"Employee Name is : "<<name<<endl;
			cout<<"Employee Role is : "<<role<<endl;
			cout<<"Employee Salary is : "<<salary<<endl;
			cout<<"Employee Experience is : "<<exp<<endl;
			cout<<"Employee Company Name is : "<<comp_name<<endl;
			cout<<"Employee Address is : "<<address<<endl;
			cout<<"Employee Email is : "<<email<<endl;
			cout<<"Employee Phone Number is : "<<contact<<endl;
		}
};
int main(){
	int i,n;
	cout<<"Enter Number of Employee Details you want : ";
	cin>>n;
	D d[n];
	for(i=0;i<n;i++){
		cout<<"Enter Details of Employee "<<i+1<<endl;
		d[i].SetValues();
		d[i].SetValues2();
		d[i].SetValues3();
		d[i].SetValues4();
	}
	for(i=0;i<n;i++){
		cout<<"Details of Employee "<<i+1<<endl;
		d[i].GetValues2();
	}
	return 0;
}
