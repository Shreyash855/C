#include<iostream>
using namespace std;
void Login();
void createAccount();
string user_name,password;  // global variables to create account
float balance=0.0f; // GLOBAL variable to show balance of account holder

void start() // Introduction page of your ATM machine
{
	cout<<"\nHi! Welcome to Mr. Shreyash's ATM Machine!";
	cout<<"\nPlease select an option from the menu below:";   
}

void printIntroMenu() // Login or create your account
{
	cout<<"\nl -> login";
	cout<<"\nc -> create new account";
	cout<<"\nq -> quit \n";
	
	char ch;
	cin>>ch; // choose option from above
	switch(ch)
	{
		case 'l': //login
			Login();
			break;
		case 'c': //create new account
			createAccount();
			break;
		case 'q': //Quit
			exit(0);
			break;
	}
}

void printMainMenu()
{
	cout<<"\nd -> Deposit Money";
	cout<<"\nw -> Withdraw Money";
	cout<<"\nr -> Request Balance\n";

	char ch1;
	float depo_amount,with_amount;
	cin>>ch1;
	switch(ch1)
	{
		case 'd': //Deposit money
			cout<<"\nAmount of deposit: $";
			cin>>depo_amount;
			balance = balance + depo_amount;
			break;
		case 'w': //Withdraw money
			cout<<"\nAmount of withdrawal: $";
			cin>>with_amount;
			if(with_amount<=balance) //check if withdraw amount is less than or equal to balance
			{
				balance = balance - with_amount;
				break;
			}
			else{
				cout<<"\nYou have only $"<<balance<<" in your account\n";
				break;
			}
		case 'r': //Request balance
			cout<<"\nYour balance is $"<<balance;
			break;
		case 'q': //Quit
			cout<<"\nThanks for stopping by!";
			exit(0);
	}
	printMainMenu(); // Do the above process until you press the q for quit
}

void Login() // After creating your account login in your account
{
	string user_id,pass;
	cout<<"\nPlease enter user id: ";
	cin>>user_id;
	cout<<"\nPlease enter your password: ";
	cin>>pass; 
	if(user_id==user_name and pass==password) // check wether username and password are correct or not
	{
		cout<<"\nAccess Granted!\n"; // if correct you are ready to access your account
	}
	else{
		cout<<"\n**********LOGIN FAILED!***********\n";
		printIntroMenu(); // if not correct again login or first create your account 
	}
}

void createAccount() // Create your account first
{
	cout<<"\nPlease enter your username: ";
	cin>>user_name;
	cout<<"\nPlease enter your password: ";
	cin>>password;
	cout<<"\nThank you! Your account has been created!\n";
	printIntroMenu(); // After creating account login again
}

int main()
{
	start(); //Intriduction page of your ATM machine
	printIntroMenu(); // Login or create your account or quit from the program
	printMainMenu(); // deposit or withdraw or check your balance or quit the program
	return 0;
}
