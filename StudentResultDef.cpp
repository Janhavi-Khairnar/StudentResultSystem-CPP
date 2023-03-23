#include<iostream>
using namespace std;

class Student
{
	private:
		char name[20];
		int id;
	public:
		void setStudent() {
			cout<<"\nEnter the Name and ID :";
			cin>>name>>id;
		}
		void getStudent() {
			cout<<"\nName :"<<name;
			cout<<"\nID :"<<id;
		}	
};

int main()
{
	Student S;
	S.setStudent();
	S.getStudent();
	return 0;
}