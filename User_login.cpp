#include <iostream>
#include <string>
using namespace std;
void main ()
{
	char ch1;
	int pass1, pass2 ;
	string name1, name2; 
	cout << "====================MENU====================== \n" ;
	cout << "1.Register \n" ;
	cout << "2.Login \n" ;
	cout << "Q.Exit Program \n" ;
	cout << "============================================== \n" ;
	do
	{
		cout << "Enter Menu : " ;
		cin >> ch1 ;
		if (ch1 == '1') 
		{
			cout << "-----------------Register------------------ \n" ;
			cout << "Input Your Username : " ;
			cin >> name1 ;
			cout << "Input Your Password : " ;
			cin >> pass1 ;
			cout << "------------------------------------------- \n" ;
		}

		else if (ch1 == '2')
		{
			cout << "------------------Login-------------------- \n" ;
			cout << "Input Your Username : " ;
			cin >> name2 ;
			cout << "Input Your Username : " ;
			cin >> pass2 ;
			cout << "------------------------------------------- \n" ;

			if ((name2 != name1) || (pass2 != pass1))
			{
				cout << "!!!!!! USRENAME OR PASSWORD INCORRECT PLEASE TRY AGAIN !!!!!! \n" ;
			}

			else cout << "Username or password is correct \^0^/ " << endl;
		}
		else if (ch1 == 'Q')
		{
			cout << "Exit Program \n" ;
		}
	}
	while (ch1 != '1'|| ch1 != '2' || ch1 != 'Q') ;
	cout << "Program Error \n " ;
} 