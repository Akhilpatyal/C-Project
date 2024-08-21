// header files
#include <iostream>
#include <fstream>
using namespace std;

// classes
class shopping
{
private:
  int pcode;
  float price;
  float dis;
  string pname;

public:
  void menu();
  void administration();
  void buyer();
  void add();
  void remove();
  void edit();
  void receipt();
  void list();
};

// shopping -->menu
void shopping::menu()
{
m:
  int choice;
  string email;
  string password;
  cout << "\t\t\t\t_______________________________\n";
  cout << "\t\t\t\t                               \n";
  cout << "\t\t\t\t   Super Market Main Menu      \n";
  cout << "\t\t\t\t                               \n";
  cout << "\t\t\t\t_______________________________\n";
  cout << "\t\t\t\t                               \n";
  cout << "\t\t\t\t  1) Administrator             \n";
  cout << "\t\t\t\t  2) Buyer                     \n";
  cout << "\t\t\t\t  3) Exit                      \n";
  cout << "\t\t\t\t Please Select                 \n";
  cin >> choice;
  switch (choice)
  {
  case 1:
    cout << "\t\t\t Please Login \n";
    cout << "\t\t\t Enter Email  \n";
    cin >> email;

    cout << "\t\t\t Password     \n";
    cin >> password;
    if (email == "akhil@001" && password == "akhil123")
    {
      administration();
    }
    else
    {
      cout << "invalid email or password !";
    }
    break;

  case 2:
  {
    buyer();
  }
  break;
  case 3:
  {
    exit(0);
  }
  break;

  default:
  {
    cout << "Please select from the given option.....";
  }
  }
  goto m;
}

// shopping -->administration
void shopping::administration()
{

m:
  int choice;
  cout << "\n\n\n\t\t\t  Administtrator Menu.. ";
  cout << "\n\t\t\t---> 1> Add the product     ";
  cout << "\n\t\t\t                            ";
  cout << "\n\t\t\t---> 2> Modify the product  ";
  cout << "\n\t\t\t                            ";
  cout << "\n\t\t\t---> 3> Delete the product  ";
  cout << "\n\t\t\t                            ";
  cout << "\n\t\t\t---> 4> Back to main menu   ";

  cout << "\n\n\t Please Enter your choice     ";
  cin>> choice;

  switch (choice)
  {
  case 1:
    add();
    break;
  case 2:
    edit();
    break;
  case 3:
    remove();
    break;
  case 4:
    menu();
    break;

  default:
    cout << "invalid choice  ! ";
    break;
  }
  goto m;
}

// shopping -->buyer
void shopping::buyer()
{
m:
  int choice;
  cout << "\n\n\n\t\t\t  Buyer..               ";
  cout << "\n\t\t\t    ......................  ";
  cout << "\n\t\t\t                            ";
  cout << "\n\t\t\t---> 1> Buy Product  ";
  cout << "\n\t\t\t                            ";
  cout << "\n\t\t\t---> 2> Go back  ";
  cout << "\n\t\t\t                            ";

  cout << "\t\t\t Please Enter your choice     ";
  cin >> choice;

  switch (choice)
  {
  case 1:
    receipt();
    break;
  case 2:
    menu();
    break;

  default:
    cout << "invalid choice  ! ";
    break;
  }
  goto m;
}

// items->> add
void shopping ::add()
{
m:
  // declare file
  fstream data;
  int c;
  int token = 0;
  float p;
  float d;
  string n;
  cout << "\n\n\t\t Add new product";
  cout << "\n\n\t\t product code for the product";
  cin >> pcode;
  cout << "\n\n\t\t Namme of the product";
  cin >> pname;
  cout << "\n\n\t\t price of the product";
  cin >> price;
  cout << "\n\n\t\t discount on  product";
  cin >> dis;
  //  file open in read mode
  data.open("database.txt", ios::in);

  if (!data)
  {
    data.open("database.txt", ios::app | ios::out); // for write mode
    data << " " << pcode << " " << pname << " " << price << " " << dis << "\n";
    data.close();
  }
  else
  {
    data >> c >> n >> p >> d;
    while (!data.eof())
    {
      if (c == pcode)
      {
        token++;
      }
      data >> c >> n >> p >> d;
    }
    data.close();

    if (token == 1)
    {
      goto m;
    }
    else
    {
      data.open("database.txt", ios::app | ios::out); // for write mode
      data << " " << pcode << " " << pname << " " << price << " " << dis << "\n";
      data.close();
    }
  }
}

// items->> edit
void shopping::edit()
{
  fstream data, data1;
  int pkey;
  int token = 0;
  int c;
  float p;
  float d;
  string n;
  cout << "\n\t\t\t Modify the record ";
  cout << "\n\t\t\t Product code      ";
  cin >> pkey;
  data.open("database.txt", ios::in);
  if (!data)
  {
    cout << "File doesn't exist";
  }
  else
  {
    data.open("database1.txt", ios::app |ios::out);
    data >> pcode >> pname >> price >> dis;
    while (!data.eof())
    {
      if (pkey == pcode)
      {
        cout << "\n\n\t\t New product code for the product";
        cin >> c;
        cout << "\n\n\t\t Namme of the product";
        cin >> n;
        cout << "\n\n\t\t price of the product";
        cin >> p;
        cout << "\n\n\t\t discount on  product";
        cin >> d;
        data << " " << c << " " << n << " " << p << " " << d << "\n";
        cout << "\n\n\n\t\t Record edited ";
        token++;
      }
      else
      {
        data1 << " " << pcode << " " << pname << " " << price << " " << dis << "\n";
      }
      data >> pcode >> pname >> price >> dis;
    }
    data.close();
    data1.close();
    remove("database.txt");
    rename("database1.txt", "database.txt");
    if (token == 0)
    {
      cout << "'n'n Recoed not found";
    }
  }
}

// items->> remove
void shopping ::remove()
{
  fstream data, data1;
  int pkey;
  int token = 0;

  cout << "\n\t\t\t Delete the record ";
  cout << "\n\t\t\t Product code      ";
  cin >> pkey;
  data.open("database.txt", ios::in);
  if (!data)
  {
    cout << "File doesn't exist";
  }
  else
  {
    data1.open("database1.txt", ios::app | ios::out);
    data >> pcode >> pname >> price >> dis;
    while (!data.eof())
    {
      if (pkey == pcode)
      {
        cout << "\n\n\t\t Product deleted successful..";
        token++;
      }
      else
      {
        data1 << " " << pcode << " " << pname << " " << price << " " << dis << "\n";
      }
      data >> pcode >> pname >> price >> dis;
    }
    data.close();
    data1.close();
    remove("database.txt");
    rename("database1.txt", "database.txt");
    if (token == 0)
    {
      cout << "'n'n Recoed not found";
    }
  }
}

// items->> list
void shopping::list()
{
  fstream data;
  data.open("database.txt", ios::in);
  cout << "\n\n___________________________________________________\n";
  cout << "ProNo\t\tName\t\tPrice";
  cout << "\n\n___________________________________________________\n";
  data >> pcode >> pname >> price >> dis;
  while (!data.eof())
  {
    cout << pcode << "\t\t" << pname << "\t\t" << price << "\n";
    data >> pcode >> pname >> price >> dis;
  }
  data.close();
}

// items->> receipt
void shopping::receipt()
{
  m:
  fstream data;
  int arrc[100];
  int arrq[100];
  char choice;
  int c = 0;
  float amount = 0;
  float dis = 0;
  float total = 0;
  cout << "\n\n\t\t\t\t RECEIPT ";
  data.open("database.txt", ios::in);
  if (!data)
  {
    cout << "\n\n Empty datbase";
  }
  else
  {
    data.close();
    list();
    cout << "\n_________________________________________________\n";
    cout << "\n|                                                \n";
    cout << "\n            Please Place the order               \n";
    cout << "\n|                                                \n";
    cout << "\n_________________________________________________\n";
    do
    {
      cout << "\n\n Enter the product code : ";
      cin >> arrc[c];
      cout << "\n\n Enter the product quantity : ";
      cin >> arrq[c];
      for (int i = 0; i < c; i++)
      {
        if (arrc[c] == arrc[i])
        {
          cout << "\n\n Duplicate product code. Please try again!";
          goto m;
        }
      }
      c++;
      cout << "\n\n Do you want to buy another product? if yes press 'y' else 'no' ";
      cin >> choice;

    } while (choice =='y');

    cout << "\n\n\t\t_________________RECEIPT_______________________";
    cout << "\n Product No\tProduct Quantity\t Price\t Amount\t Amount with discount\n";
    for (int i = 0; i < c; i++)
    {
      data.open("database.txt", ios::in);
      data >> pcode >> pname >> price >> dis;
      while (!data.eof())
      {
        if (pcode == arrc[i])
        {
          amount = price * arrq[i];
          dis = amount - (amount * dis / 100);
          total = total + dis;
          cout << "\n"
               << pcode << "\t\t" << pname << "\t\t" << arrq[i] << "\t\t" << price << "\t" << amount << "\t\t" << dis;
        }
        data >> pcode >> pname >> price >> dis;
      }
    }
    data.close();
  }
  cout << "\n\n____________________________________________________________";
  cout << "\n Total Amount : " << total;
}


int main()
{
  shopping s;
  s.menu();
}