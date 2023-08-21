#include<iostream>
#include<cstdlib>
using namespace std;

#define Deduct 10

int main()
{
	char more;
	do{
		int amount;
		cout<<"Enter Betting Amount: ";
		cin>>amount;
	
		while(amount>=Deduct){
			int choise;
			cout<<"Enter Your Choise: ";
			cin>>choise;
			
			if(choise<1 || choise>100){
				cout<<"Wrong Choise"<<endl;
				continue;
			}
			
			int random = rand() % 10 + 1; 		//in the range 1 to 100
			
			if(choise==random){
				cout<<"!!! You Win !!!"<<endl;
				break;
			}
			
			else{
				cout<<"You Loose."<<endl;			
				amount=amount-Deduct;
				
				if(amount<Deduct){
					cout<<"Sorry Less Fund"<<endl;
					break;
				}
				
				char turn;
				cout<<"Want to Play More or Leave? Y/N: ";
				cin>>turn;
				
				if(turn=='N' || turn=='n'){
					break;
				}
			}
			
		}
		
		cout<<"Want to Add more Fund? Y/N:";
		cin>>more;
		
	}while(more=='Y' || more=='y');
	
	return 0;
}
