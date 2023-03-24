#include<iostream>
using namespace std;

class Student
{
	public:
		char name[20];
		int id;
	
		void setStudent() {
			cout<<"\nEnter the Name and ID :";
			cin>>name>>id;
		}
};

class Result:public Student
{
	private:
		float per;
	public:
		void setPer() {
			cout<<"\nEnter the Percentage :";
			cin>>per;
		}	
		  void showResult() {
			cout<<"\nName :"<<name;
			cout<<"\nID :"<<id;
			cout<<"\nPercentage :"<<per;
		}
};

int main()
{

	Result R;
	R.setStudent();
	R.setPer();
	R.showResult();

	return 0;
}