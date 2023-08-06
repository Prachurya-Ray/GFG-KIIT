/*
	The developed program will correctly store all the students’ information. The data can be any
	information about the student, their personal details, roll number, academic records, etc (At
	least 5) along with their marks in 3 subjects along with their percentage with the grading
	system- A-60%+ , B- 40%+, F- <40% .

*/


#include <iostream>
#include <fstream>
using namespace std;

//Function Declaration
void getData(int, struct node *);
void insertData(int, struct node *);
void putData();


//structure 
struct node
{
	string name;
	
	long roll;
	
	int age;
	
	char sex[1];
	
	int mark[3];
	
	int percentage;
	
	char grade[1];
};


int main()
{
	int number_of_Students;
	
	cout<<"Enter Number of Students: ";
	
	cin>>number_of_Students;
	
	
	
	struct node nod[number_of_Students];

	
		
	getData(number_of_Students, nod);
	
	insertData(number_of_Students, nod);
	
	putData();	
	
	
	return 0;
}




void getData(int number_of_Students, struct node nod[])
{
	
	for(int i=0; i<number_of_Students; i++)
	{
		
		cout<<endl<<endl;
		
		cout<<"Enter Name: ";
		getline(cin>>ws, nod[i].name);
		
		cout<<"\nEnter Roll: ";
		cin>>nod[i].roll;
		
		cout<<"\nEnter Age: ";
		cin>>nod[i].age;
		
		cout<<"\nEnter Sex (M/F): ";
		cin>>nod[i].sex;

		
		//for 3 marks
		for(int j=0; j<3; j++)
		{
			cout<<"\nEnter Mark "<<j+1<<": ";			
			cin>>nod[i].mark[j];
		}


		
		//for percentage
		int sum=0;
		
		for(int j=0; j<3; j++)
			sum+=(nod[i].mark[j]);
			
		nod[i].percentage=sum/3; 	//Assuming total mark per each subject is 100


		
		//grade
		if(nod[i].percentage>60)
			nod[i].grade[0]='A';
			
		else if(nod[i].percentage>40)
			nod[i].grade[0]='B';
			
		else
			nod[i].grade[0]='F';
		
	}
}



void insertData(int number_of_Students, struct node nod[])
{
	
	ofstream fout;	
	
	fout.open("C:/Users/KIIT/Documents/SRMS.txt", ios::app);


	for(int i=0; i<number_of_Students; i++)
	{
		fout << nod[i].name << "\t" 
			 << nod[i].roll << "\t" 
			 << nod[i].age << "\t" 
			 << nod[i].sex << "\t";

		
		//3 marks
		for(int j=0; j<3; j++)
			fout<<nod[i].mark[j]<<"\t";
			
		fout<<nod[i].percentage<<"\t"<<nod[i].grade[0]<<endl;
		
	}
		
	fout.close();
	
}



void putData()
{
	string line;
	
	ifstream fin;
		
	fin.open("C:/Users/KIIT/Documents/SRMS.txt");
	
	while (getline(fin, line)) 
	{		
		cout << line << endl;
	}

	fin.close();
}
