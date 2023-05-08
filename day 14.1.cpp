#include<iostream>
#include<string.h>

using namespace std;

class Admin{
	
	private:	
		int total_annual_revenue;
		char can_terminate[30];
		
	public:	
     	char company_name[30];
		int total_staff;
	
	protected:		
		int manager_salary;
		int employee_salary;
		
	
};

class Manager : public Admin{
	
	public:		
		void myAccess(){
			
			manager_salary = 100000;
			cout<<"Manager salary : "<<manager_salary<<endl;
			
			employee_salary = 25000;
			cout<<"Emoloyee salary : "<<employee_salary<<endl;		
		}
};

class Employee : public Manager{
	
	public:		
		void myAccess(){
			
			char company_name[] = "DS BROTHERS";
			cout<<"Company name : "<<company_name<<endl;
			
			total_staff = 55;
			cout<<"Total Staff : "<<total_staff<<endl;	
		}
};

int main (){
	Employee obj;
	
	obj.Manager::myAccess();
	obj.myAccess();
	
	return 0 ;
}
