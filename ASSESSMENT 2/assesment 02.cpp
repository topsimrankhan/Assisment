/*Define a class to represent lecture details. Include the following members 
and the program should handle at least details of 5 lecturers.*/



#include<iostream>
using namespace std;



class lecture              //create a class
{
	public:
	string lecturer_name,subject_name,course_name,last_name;
	int lecturers_number;
	
	lecture()        //constructor
	{
		cout<<"Enter the name of lecturer : ";
		cin>>lecturer_name>>last_name;
		
		cout<<"Enter the name of subject : ";
		cin>>subject_name;
		
		cout<<"Enter the name of course : ";
		cin>>course_name;
		
		cout<<"Enter the number of lecturers : ";
		cin>>lecturers_number;	
	}
	
	
	void display() //function for print details
	{
		cout<<endl<<"Name of the lecturer : "<<lecturer_name<<endl;
		
		cout<<"Name of the subject : "<<subject_name<<endl;
		
		cout<<"Name of the course : "<<course_name<<endl;
		
		cout<<"Number of lecturers : "<<lecturers_number;
	}	
	
};




int main()
{
	cout<<endl<<"--------------------Enter the Lecturer Details-------------------"<<endl<<endl;
	
	lecture l1; //creat object of class
	cout<<endl;
	
	lecture l2;
	cout<<endl;
	
	lecture l3;
	cout<<endl;
	
	lecture l4;
	cout<<endl;
	
	lecture l5;
	cout<<endl;
	
	cout<<endl<<"--------------------Lecturer Details-------------------"<<endl<<endl;
	
	l1.display(); //call the function
	cout<<endl;
	
	l2.display();
	cout<<endl;
	
	l3.display();
	cout<<endl;
	
	l4.display();
	cout<<endl;
	l5.display();


	return 0;
}

