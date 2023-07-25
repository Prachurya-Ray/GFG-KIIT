#include<iostream>
using namespace std;

void convert(int rupees, float rate)
{
	float amount = rupees*rate;
	cout<<"Amout in Desired Currency is: "<<amount<<endl;
}

int main()
{
	cout<<"**************************************************"<<endl;
	cout<<"**************************************************"<<endl;
	
	int rupees;
	cout<<"Enter the desired amount: ";
	cin>>rupees;
	
	int choise;
	
	do
	{		
		cout<<"----------------------------------------------"<<endl;
				
		cout<<"Enter Currency number for Conversion: "<<endl<<endl;
		cout<<"1. US Dollar"<<endl;
		cout<<"2. Euros"<<endl;
		cout<<"3. Yen"<<endl;
		cout<<"4. Pound"<<endl;
		cout<<"5. Kuwaiti Dinar"<<endl;
		cout<<"6. Omani Rial"<<endl;
		cout<<"7. Swiss Franc"<<endl;
		cout<<"8. Cayman Island Dollar"<<endl;
		cout<<"9. Bahraini Dinar "<<endl;
		cout<<"10. Singapore Dollar"<<endl;
		cout<<"0. Exit"<<endl;
		
		cout<<endl;
				
		cout<<"-> ";
		cin>>choise;
		
		switch(choise)
		{
			case 1: convert(rupees, 0.012);
					break;
			case 2: convert(rupees, 0.011);
					break;
			case 3: convert(rupees, 1.72);
					break;
			case 4: convert(rupees, 0.0095);
					break;
			case 5: convert(rupees, 0.0037);
					break;
			case 6: convert(rupees, 0.0047);
					break;
			case 7: convert(rupees, 0.011);
					break;
			case 8: convert(rupees, 0.010);
					break;
			case 9: convert(rupees, 0.0046);
					break;
			case 10: convert(rupees, 0.016);
					break;
		}
		
		cout<<"----------------------------------------------"<<endl<<endl;
		
	}while(choise>0);
	
	cout<<"**************************************************"<<endl;
	cout<<"**************************************************"<<endl;

  return 0;
  
}
