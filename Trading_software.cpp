#include <iostream>
#include <ctime>
using namespace std;
int main()
{
    char start;
    float shop(void);
    char choice;
startL:
    cout << "Please press H to strat shopping for Home Appliacnes" << endl;
start:
    cin >> start;
    if (start == 'h' || start == 'H')
    {
        float total = shop();
        time_t t = time(NULL);
        tm *tptr = localtime(&t);

        cout << "Bill date";
        cout << tptr->tm_mday << "/";
        cout << 1 + tptr->tm_mon << "/";
        cout << 1900 + tptr->tm_year << endl;

        cout << "Bill date" << (tptr->tm_hour) << ":" << (tptr->tm_min) << ":" << (tptr->tm_sec) << endl;
        cout << "total bill payment:" << total << endl;

        if (total > 50000 && 100000)
        {
            total = total - (0.05 * total);
            cout << "Total discount: 5%" << endl;
        }
        else if (total > 100000 && 125000)
        {
            total = total - (0.1 * total);
            cout << "Total discount: 10%" << endl;
        }
        else if (total > 125000 && 150000)
        {
            total = total - (0.25 * total);
            cout << "Total discount: 250%" << endl;
        }
        else if (total > 150000)
        {
            total = total - (0.5 * total);
            cout << "Total discount: 50%" << endl;
        }
        cout << "Total Bill Amount is:" << total << endl;
    Again:
        cout << "Do you want to shopping again y or n" << endl;
        cin >> choice;
        if (choice == 'y' || choice == 'Y')
        {
            goto startL;
        }
        else if (choice == 'n' || choice == 'N')
        {
            cout << "Thanks for shopping" << endl;
        }
        else
        {
            cout << "tou have entered the wrong option, please press H" << endl;
            goto Again;
        }
    }
    else
    {
        cout << "tou have entered the wrong option, please press H" << endl;
        goto startL;
    }
}

float shop()
{

shop:
    char choice;
    char product;
    int quantity;
    float bill = 0;
itemLevel:
    cout << "*******welcome****************" << endl;
    cout << "*******Please follow the instruction****************" << endl;
    cout << "[1] Press r to order Refrigrator" << endl;
    cout << "[2] Press w to order Washing Machine" << endl;
    cout << "[3] Press t to order Television" << endl;
    cout << "[4] Press m to order Microwave" << endl;
    cout << "[5] Press a to order Air Conditioner" << endl;
    cin >> choice;
    if (choice == 'r' || choice == 'w' || choice == 't' || choice == 'm' || choice == 'a' || choice == 'R' || choice == 'W' || choice == 'T' || choice == 'M' || choice == 'A')
    {
        if (choice == 'r' || choice == 'R')
        {
        refrigerator:
            cout << "*******Refrigerator Details****************" << endl;
            cout << "[1] Whirlpool  =>Price: 40000 |" << endl;
            cout << "[2] Samsung    =>Price: 25000 |" << endl;
            cout << "[3] Haier      =>Price: 20000 |" << endl;
            cout << "[4] Voltas     =>Price: 30000 |" << endl;
            cout << "[5] Panasonic  =>Price: 35000 |" << endl;
            cout << "Please enter number according to your choice" << endl;
            cin >> product;
            if (product == '1')
            {
                cout << "Please enter the quantity of the product" << endl;
                cin >> quantity;
                bill = bill + quantity * 40000;
            }
            else if (product == '2')
            {
                cout << "Please enter the quantity of the product" << endl;
                cin >> quantity;
                bill = bill + quantity * 25000;
            }
            else if (product == '3')
            {
                cout << "Please enter the quantity of the product" << endl;
                cin >> quantity;
                bill = bill + quantity * 20000;
            }
            else if (product == '4')
            {
                cout << "Please enter the quantity of the product" << endl;
                cin >> quantity;
                bill = bill + quantity * 30000;
            }
            else if (product == '5')
            {
                cout << "Please enter the quantity of the product" << endl;
                cin >> quantity;
                bill = bill + quantity * 35000;
            }
            else
            {
                cout << "you have entered wrong option!";
                goto refrigerator;
            }
        }

        if (choice == 'W' || choice == 'w')
        {
        washingm:
            cout << "*******Washing machine Details****************" << endl;
            cout << "[1] Bosch      =>Price: 40000 |" << endl;
            cout << "[2] LG         =>Price: 25000 |" << endl;
            cout << "[3] Haier      =>Price: 20000 |" << endl;
            cout << "[4] MayTag     =>Price: 30000 |" << endl;
            cout << "[5] Samsung    =>Price: 35000 |" << endl;
            cout << "Please enter number according to your choice" << endl;
            cin >> product;
            if (product == '1')
            {
                cout << "Please enter the quantity of the product" << endl;
                cin >> quantity;
                bill = bill + quantity * 40000;
            }
            else if (product == '2')
            {
                cout << "Please enter the quantity of the product" << endl;
                cin >> quantity;
                bill = bill + quantity * 25000;
            }
            else if (product == '3')
            {
                cout << "Please enter the quantity of the product" << endl;
                cin >> quantity;
                bill = bill + quantity * 20000;
            }
            else if (product == '4')
            {
                cout << "Please enter the quantity of the product" << endl;
                cin >> quantity;
                bill = bill + quantity * 30000;
            }
            else if (product == '5')
            {
                cout << "Please enter the quantity of the product" << endl;
                cin >> quantity;
                bill = bill + quantity * 35000;
            }
            else
            {
                cout << "you have entered wrong option!";
                goto washingm;
            }
        }

        if (choice == 'T' || choice == 't')
        {
        television:
            cout << "*******Television Details****************" << endl;
            cout << "[1] Bosch      =>Price: 40000 |" << endl;
            cout << "[2] LG         =>Price: 25000 |" << endl;
            cout << "[3] Haier      =>Price: 20000 |" << endl;
            cout << "[4] MayTag     =>Price: 30000 |" << endl;
            cout << "[5] Samsung    =>Price: 35000 |" << endl;
            cout << "Please enter number according to your choice" << endl;
            cin >> product;
            if (product == '1')
            {
                cout << "Please enter the quantity of the product" << endl;
                cin >> quantity;
                bill = bill + quantity * 40000;
            }
            else if (product == '2')
            {
                cout << "Please enter the quantity of the product" << endl;
                cin >> quantity;
                bill = bill + quantity * 25000;
            }
            else if (product == '3')
            {
                cout << "Please enter the quantity of the product" << endl;
                cin >> quantity;
                bill = bill + quantity * 20000;
            }
            else if (product == '4')
            {
                cout << "Please enter the quantity of the product" << endl;
                cin >> quantity;
                bill = bill + quantity * 30000;
            }
            else if (product == '5')
            {
                cout << "Please enter the quantity of the product" << endl;
                cin >> quantity;
                bill = bill + quantity * 35000;
            }
            else
            {
                cout << "you have entered wrong option!";
                goto television;
            }
        }

        if (choice == 'M' || choice == 'm')
        {
        Microwave:
            cout << "*******Microwave Details****************" << endl;
            cout << "[1] Bosch      =>Price: 40000 |" << endl;
            cout << "[2] LG         =>Price: 25000 |" << endl;
            cout << "[3] Haier      =>Price: 20000 |" << endl;
            cout << "[4] MayTag     =>Price: 30000 |" << endl;
            cout << "[5] Samsung    =>Price: 35000 |" << endl;
            cout << "Please enter number according to your choice" << endl;
            cin >> product;
            if (product == '1')
            {
                cout << "Please enter the quantity of the product" << endl;
                cin >> quantity;
                bill = bill + quantity * 40000;
            }
            else if (product == '2')
            {
                cout << "Please enter the quantity of the product" << endl;
                cin >> quantity;
                bill = bill + quantity * 25000;
            }
            else if (product == '3')
            {
                cout << "Please enter the quantity of the product" << endl;
                cin >> quantity;
                bill = bill + quantity * 20000;
            }
            else if (product == '4')
            {
                cout << "Please enter the quantity of the product" << endl;
                cin >> quantity;
                bill = bill + quantity * 30000;
            }
            else if (product == '5')
            {
                cout << "Please enter the quantity of the product" << endl;
                cin >> quantity;
                bill = bill + quantity * 35000;
            }
            else
            {
                cout << "you have entered wrong option!";
                goto Microwave;
            }
        }

        if (choice == 'A' || choice == 'a')
        {
        AirConditioner:
            cout << "*******Air Conditioner Details****************" << endl;
            cout << "[1] Bosch      =>Price: 40000 |" << endl;
            cout << "[2] LG         =>Price: 25000 |" << endl;
            cout << "[3] Haier      =>Price: 20000 |" << endl;
            cout << "[4] MayTag     =>Price: 30000 |" << endl;
            cout << "[5] Samsung    =>Price: 35000 |" << endl;
            cout << "Please enter number according to your choice" << endl;
            cin >> product;
            if (product == '1')
            {
                cout << "Please enter the quantity of the product" << endl;
                cin >> quantity;
                bill = bill + quantity * 40000;
            }
            else if (product == '2')
            {
                cout << "Please enter the quantity of the product" << endl;
                cin >> quantity;
                bill = bill + quantity * 25000;
            }
            else if (product == '3')
            {
                cout << "Please enter the quantity of the product" << endl;
                cin >> quantity;
                bill = bill + quantity * 20000;
            }
            else if (product == '4')
            {
                cout << "Please enter the quantity of the product" << endl;
                cin >> quantity;
                bill = bill + quantity * 30000;
            }
            else if (product == '5')
            {
                cout << "Please enter the quantity of the product" << endl;
                cin >> quantity;
                bill = bill + quantity * 35000;
            }
            else
            {
                cout << "you have entered wrong option!";
                goto AirConditioner;
            }
        }
    }
    else
    {
        cout << "You have entered wrong option try again!" << endl;
        goto shop;
    }
    return bill;
}