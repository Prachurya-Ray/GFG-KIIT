#include <iostream>
#include <string>
#include <map>

using namespace std;

class Bank {
	private:
				
	    map<int, float> accounts;
	    int accountNumber;
	
	public:
	    Bank() : accountNumber(110000) {
	    	cout <<endl;
	    	cout<<"************************************" << endl;
	    	cout<<"************************************" << endl;
			cout<<"********** Welcome to SBI **********" << endl; 
	    	cout<<"************************************" << endl;
	    	cout<<"************************************" << endl << endl;		
		}
	
	    void createAccount() {
	        accountNumber++;
	        accounts[accountNumber] = 0.0;
	        cout << "Account created with account number: " << accountNumber << endl;
	    }
	
	    void deposit() {
	        int accNum;
	        float amount;
	        cout << "Enter account number: ";
	        cin >> accNum;
	
	        if (accounts.find(accNum) != accounts.end()) {
	            cout << "Enter amount to deposit: ";
	            cin >> amount;
	            accounts[accNum] += amount;
	            cout << "Amount deposited successfully." << endl;
	        } else {
	            cout << "Account not found." << endl;
	        }
	    }
	
	    void withdraw() {
	        int accNum;
	        float amount;
	        cout << "Enter account number: ";
	        cin >> accNum;
	
	        if (accounts.find(accNum) != accounts.end()) {
	            cout << "Enter amount to withdraw: ";
	            cin >> amount;
	
	            if (accounts[accNum] >= amount) {
	                accounts[accNum] -= amount;
	                cout << "Amount withdrawn successfully." << endl;
	            } else {
	                cout << "Insufficient balance." << endl;
	            }
	        } else {
	            cout << "Account not found." << endl;
	        }
	    }
	
	    void closeAccount() {
	        int accNum;
	        cout << "Enter account number to close: ";
	        cin >> accNum;
	
	        if (accounts.find(accNum) != accounts.end()) {
	            accounts.erase(accNum);
	            cout << "Account closed successfully." << endl;
	        } else {
	            cout << "Account not found." << endl;
	        }
	    }
	
	    void balanceEnquiry() {
	        int accNum;
	        cout << "Enter account number: ";
	        cin >> accNum;
	
	        if (accounts.find(accNum) != accounts.end()) {
	            cout << "Balance: " << accounts[accNum] << std::endl;
	        } else {
	            cout << "Account not found." << std::endl;
	        }
	    }
};

int main() {
    Bank bank;
    int choice;

    do {
        cout << "\n----------MENU----------\n";
        cout << "1. Create Account\n";
        cout << "2. Deposit\n";
        cout << "3. Withdraw\n";
        cout << "4. Close Account\n";
        cout << "5. Balance Enquiry\n";
        cout << "6. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                bank.createAccount();
                break;
            case 2:
                bank.deposit();
                break;
            case 3:
                bank.withdraw();
                break;
            case 4:
                bank.closeAccount();
                break;
            case 5:
                bank.balanceEnquiry();
                break;
            case 6:
                cout << "Exiting the program.\n";
                break;
            default:
                cout << "Invalid choice. Please try again.\n";
        }
    } while (choice != 6);

    return 0;
}

