// airline reservation system
// require header files
#include <iostream>
#include <iomanip>
#include <fstream>
using namespace std;

// global declaration
void main_menu();

// making  a class
class reservation
{
private:
public:
	// constructor
	reservation()
	{
		main_menu();
	}
};

// utilities classes

// customer details...
class details
{
public:
	static string name, gender;
	int p_num;
	int age;
	string add;
	static int c_id;
	char arr[100];
	void information()
	{
		cout << "Enter customer's ID:" << endl;
		cin >> c_id;
		cout << "Enter customer's Name:" << endl;
		cin >> name;
		cout << "Enter customer's Phone Number:" << endl;
		cin >> p_num;
		cout << "Enter customer's Address:" << endl;
		cin >> add;
		cout << "Enter customer's Gender" << endl;
		cin >> gender;
		cout << "Your Details are saved with us..." << endl;
	}
};

int details::c_id;
string details::name;
string details::gender;

// registration class
class registration
{
public:
	static int choice;
	int choice1;
	static float charges;
	int back;
	void flight()
	{

		string flightN[] = {"Dubai", "Australia", "America", "UK"};
		// for loop
		for (int i = 0; i < 4; i++)
		{
			cout << i + 1 << ". flight to " << flightN[i] << endl;
		}

		cout << "Welcome to Airline...." << endl;
		cout << "Choose the country where you want to registered !.." << endl;
		cin >> choice;
		switch (choice)
		{
		case 1:
		{
			cout << "\t Welcome to Dubai Emirates    >>>>" << endl;
			cout << "\t your comfort is our first priority , Happy ! Journey" << endl;
			cout << "\t following flights are listed below:" << endl;
			cout << "1. Dubai-Z256       : timing:(8:40 pm)  Rs:15000" << endl;
			cout << "1. Dubai-Enterprise : timing:(10:30 pm) Rs:18000" << endl;
			cout << "1. Dubai-Atlasian   : timing:(5:00 pm)  Rs:20,000" << endl;
			cout << "1. Dubai-89Fock     : timing:(3:50 pm)  Rs:15,599" << endl;
			cout << "\t Please select the flight you want to book .." << endl;
			if (choice1 == 1)
			{
				cout << "You flight is booked  " << endl;
				cout << "Flight name is : Dubai-Z256 : timing:(8:40 pm)" << endl;
				cout << "Payment of Rs:15000 is completed ....." << endl;
			}
			else if (choice1 == 2)
			{
				cout << "You flight is booked  " << endl;
				cout << "Flight name is : Dubai-Enterprise : timing:(10:30 pm)" << endl;
				cout << "Payment of Rs:18000 is completed ....." << endl;
			}
			else if (choice1 == 3)
			{
				cout << "You flight is booked  " << endl;
				cout << "Flight name is : Dubai-Atlasian  : timing:(5:00 pm)" << endl;
				cout << "Payment of Rs:20,000 is completed ....." << endl;
			}
			else if (choice1 == 4)
			{
				cout << "You flight is booked  " << endl;
				cout << "Flight name is : Dubai-89Fock  : timing:(3:50 pm)" << endl;
				cout << "Payment of Rs:15,599 is completed ....." << endl;
			}
			else
			{
				cout << "invalid input , shifting to the back" << endl;
				flight();
			}
			cout << "press any key to go for mainmenu";
			cin >> back;
			if (back == 1)
			{
				main_menu();
			}
			else
			{
				main_menu();
			}
		}

		case 2:
		{
			cout << "\t Welcome to Australia Emirates    >>>>" << endl;
			cout << "\t your comfort is our first priority , Happy ! Journey" << endl;
			cout << "\t following flights are listed below:" << endl;
			cout << "2. Australia-Z720       : timing:(8:45 pm)  Rs:16000" << endl;
			cout << "2. Australia-Enterprise : timing:(6:30 pm) Rs:22000" << endl;
			cout << "2. Australia-Atlasian   : timing:(4:00 pm)  Rs:20,000" << endl;
			cout << "2. Australia-89Flyer     : timing:(11:50 pm)  Rs:17,599" << endl;
			cout << "\t Please select the flight you want to book .." << endl;
			if (choice1 == 1)
			{
				cout << "You flight is booked  " << endl;
				cout << "Flight name is : Australia-Z720 : timing:(8:45 pm)" << endl;
				cout << "Payment of Rs:16000 is completed ....." << endl;
			}
			else if (choice1 == 2)
			{
				cout << "You flight is booked  " << endl;
				cout << "Flight name is : Australia-Enterprise : timing:(6:30 pm)" << endl;
				cout << "Payment of Rs:22000 is completed ....." << endl;
			}
			else if (choice1 == 3)
			{
				cout << "You flight is booked  " << endl;
				cout << "Flight name is : Australia-Atlasian  : timing:(4:00 pm)" << endl;
				cout << "Payment of Rs:20,000 is completed ....." << endl;
			}
			else if (choice1 == 4)
			{
				cout << "You flight is booked  " << endl;
				cout << "Flight name is : Australia-89Flyer  : timing:(11:50 pm)" << endl;
				cout << "Payment of Rs:17,599 is completed ....." << endl;
			}
			else
			{
				cout << "invalid input , shifting to the back" << endl;
				flight();
			}
			cout << "press any key to go for mainmenu";
			cin >> back;
			if (back == 1)
			{
				main_menu();
			}
			else
			{
				main_menu();
			}
		}

		case 3:
		{
			cout << "\t Welcome to America Emirates    >>>>" << endl;
			cout << "\t your comfort is our first priority , Happy ! Journey" << endl;
			cout << "\t following flights are listed below:" << endl;
			cout << "2. America-Z900       : timing:(8:45 pm)  Rs:16000" << endl;
			cout << "2. America-classic : timing:(6:00 pm) Rs:20,000" << endl;
			cout << "2. America-Atlasian   : timing:(4:00 pm)  Rs:24,000" << endl;
			cout << "2. America-89zukz     : timing:(11:00 pm)  Rs:14,599" << endl;
			cout << "\t Please select the flight you want to book .." << endl;
			if (choice1 == 1)
			{
				cout << "You flight is booked  " << endl;
				cout << "Flight name is : America-Z900 : timing:(8:45 pm)" << endl;
				cout << "Payment of Rs:16000 is completed ....." << endl;
			}
			else if (choice1 == 2)
			{
				cout << "You flight is booked  " << endl;
				cout << "Flight name is : Australia-classic : timing:(6:00 pm)" << endl;
				cout << "Payment of Rs:20,000 is completed ....." << endl;
			}
			else if (choice1 == 3)
			{
				cout << "You flight is booked  " << endl;
				cout << "Flight name is : Australia-Atlasian  : timing:(4:00 pm)" << endl;
				cout << "Payment of Rs:24,000 is completed ....." << endl;
			}
			else if (choice1 == 4)
			{
				cout << "You flight is booked  " << endl;
				cout << "Flight name is : Australia-89zukz  : timing:(11:00 pm)" << endl;
				cout << "Payment of Rs:14,599 is completed ....." << endl;
			}
			else
			{
				cout << "invalid input , shifting to the back" << endl;
				flight();
			}
			cout << "press any key to go for mainmenu";
			cin >> back;
			if (back == 1)
			{
				main_menu();
			}
			else
			{
				main_menu();
			}
		}

		case 4:
		{
			cout << "\t Welcome to UK Enterprise    >>>>" << endl;
			cout << "\t your comfort is our first priority , Happy ! Journey" << endl;
			cout << "\t following flights are listed below:" << endl;
			cout << "2. UK-Z900       : timing:(8:45 pm)  Rs:16000" << endl;
			cout << "2. UK-classic : timing:(6:00 pm) Rs:20,000" << endl;
			cout << "2. UK-Atlasian   : timing:(4:00 pm)  Rs:24,000" << endl;
			cout << "\t Please select the flight you want to book .." << endl;
			if (choice1 == 1)
			{
				cout << "You flight is booked  " << endl;
				cout << "Flight name is : UK-Z900 : timing:(8:45 pm)" << endl;
				cout << "Payment of Rs:16000 is completed ....." << endl;
			}
			else if (choice1 == 2)
			{
				cout << "You flight is booked  " << endl;
				cout << "Flight name is : UK-classic : timing:(6:00 pm)" << endl;
				cout << "Payment of Rs:20,000 is completed ....." << endl;
			}
			else if (choice1 == 3)
			{
				cout << "You flight is booked  " << endl;
				cout << "Flight name is : UK-Atlasian  : timing:(4:00 pm)" << endl;
				cout << "Payment of Rs:24,000 is completed ....." << endl;
			}
			else
			{
				cout << "invalid input , shifting to the back" << endl;
				flight();
			}
			cout << "press any key to go for mainmenu";
			cin >> back;
			if (back == 1)
			{
				main_menu();
			}
			else
			{
				main_menu();
			}
		}
		default:
		{
			cout << "invalid input , shifting to the back" << endl;
			main_menu();
			break;
		}
		}
	}
};

float registration::charges;
int registration::choice;

// making tickets function using inheritance
class ticket : public registration, details
{
public:
	void tickets()
	{
		string destination = "";
		// write the files...
		ofstream outf("records.txt"); // for creating files
		// innside the files
		{
			outf << "......................Xyz Airlines............." << endl;
			outf << "......................Ticket............." << endl;
			outf << "........................................." << endl;
			outf << "customer ID:" << details::c_id << endl;
			outf << "customer Nmae:" << details::name << endl;
			outf << "customer Gender:" << details::gender << endl;
			outf << "Discription..." << endl;
			if (registration::choice == 1)
			{
				destination = "Dubai";
			}
			else if (registration::choice == 2)
			{
				destination = "Australia";
			}
			else if (registration::choice == 3)
			{
				destination = "America";
			}
			else if (registration::choice == 4)
			{
				destination = "UK";
			}
			outf << "Destination:" << destination << endl;
			outf << "flight cost:" << registration::charges << endl;
		}
		outf.close();
	}
	// read the file
	void displaybill()
	{
		ifstream ifs("record.txt");
		{

			if (!ifs)
			{
				cout << "file Error";
			}

			while (!ifs.eof())
			{
				ifs.getline(arr, 100);
				cout << arr;
			}
		}
		ifs.close();
	}
};

// main_menu function
void main_menu()
{
	int lchoice;
	int schoice;
	int back;
	cout << "\t ............ XYZ AirLine Reservation........";
	cout << "\t\t..................................";
	cout << "\t ...... Main Menu ...........................";
	cout << "\t Press one (1) to add customer detaile....";
	cout << "\t Press two (2) for airline registration...";
	cout << "\t Press three (3)for tickets and charges...";
	cout << "\t Press four(4) for exit ..................";
	cout << "enter your choice ";
	cin >> lchoice;

	// other classes objects are created.....
	details d;
	registration r;
	ticket t;
	// switches......
	switch (lchoice)
	{
	case 1:
	{
		cout << "\t <----------customers--------------->\n";
		d.information();
		cout << "press any key to go for mainmenu";
		cin >> back;
		if (back == 1)
		{
			main_menu();
		}
		else
		{
			main_menu();
		}
		break;
	}

	case 2:
	{
		cout << "\t <----------Airline Registration --------------->\n";
		r.flight();
		cout << "press any key to go for mainmenu";
		cin >> back;
		if (back == 1)
		{
			main_menu();
		}
		else
		{
			main_menu();
		}
		break;
	}

	case 3:
	{
		cout << "\t <----------Registration tickets --------------->\n";
		t.tickets();
		cout << "your ticket is printed :";
		cout << "press one (1) to display you ticket..";
		cin >> back;

		if (back == 1)
		{
			t.displaybill();
			cout << "press any key to go for mainmenu";
			cin >> back;
			if (back == 1)
			{
				main_menu();
			}
			else
			{
				main_menu();
			}
		}
		else
		{
			main_menu();
		}
		break;
	}

	case 4:
	{
		cout << "Thank you for visite ! \n";
		break;
	}

	default:
	{
		cout << "Invalid input ! please try again ..." << endl;
		main_menu();
		break;
	}
	}
};

// main function
int main()
{
	reservation obj1;
	return 0;
}
