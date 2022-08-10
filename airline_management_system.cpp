#include <iostream>
#include <fstream>
#include <iomanip>
#include <string>
using namespace std;
void mainMenu();
class Management
{
public:
    Management()
    {
        mainMenu();
    }
};
class Details
{
public:
    static int age;
    static string Fname;
    static string Lname;
    static char gen;
    static long long int address;
    void register1()
    {
        cout << "Enter your First name:";
        cin >> Fname;
        cout << endl;
        cout << "Enter your last name:";
        cin >> Lname;
        cout << endl;
        cout << "Enter your age:";
        cin >> age;
        cout << endl;
        cout << "Gender [M/F]:";
        cin >> gen;
        cout << endl;
        cout << "Enter mobile number:";
        cin >> address;
        cout << endl
             << endl;
        cout << "Saving your details..........." << endl;
        cout << "Saved!" << endl
             << endl;
    }
};
string Details::Fname;
string Details::Lname;
int Details::age;
char Details::gen;
long long int Details::address;
class Selection
{
public:
    static string origin;
    int choice, deschoice;
    static int charges;
    static string destination;
    static string airln;
    static string date;
    void flights()
    {
        cout << "Enter date of travel:";
        cin >> date;
        cout << endl
             << endl;
        cout << "Enter your origin city:";
        cin >> origin;
        cout << endl;
        cout << "Select where you want to travel-" << endl
             << endl;
        cout << "Press 1 for flights to Delhi" << endl;
        cout << "Press 2 for flights to Mumbai" << endl;
        cout << "Press 3 for flights to Bengaluru" << endl;
        cout << "Press 4 for flights to Hyderabad" << endl;
        cout << "Press 5 for flights to Kolkata" << endl;
        cout << "Press 6 for flights to Varanasi" << endl
             << endl;
        cout << "Enter the number of your preffered city:";
        cin >> choice;
        cout << endl
             << endl;
        switch (choice)
        {
        case 1:

            destination = "Delhi";
            if (origin.compare(destination) == 0)
            {
                cout << "Destination and origin can not be the the same!" << endl;
                cout << "Returning to the previous menu." << endl;
                flights();
            }
            cout << "There are 3 flights to Delhi:-" << endl
                 << endl;
            cout << "1.6E 8689-Indigo Airlines Fare=Rs 6909." << endl;
            cout << "2.G8 987-Go First Air Fare=8729" << endl;
            cout << "3.AI 8769-Air India Fare=23111" << endl
                 << endl;
            cout << "Choose your airline:";
            cin >> deschoice;
            cout << endl;
            if (deschoice == 1)
            {
                charges = 6909;
                airln = "6E 8689-Indigo Airlines";
            }
            else if (deschoice == 2)
            {
                charges = 8729;
                airln = "G8 987-Go First Air";
            }
            else if (deschoice == 3)
            {
                charges = 23111;
                airln = "AI 8769-Air India";
            }
            else
            {
                cout << "Invalid Choice returning to the previous menu" << endl;
                flights();
            }
            break;

        case 2:
            destination = "Mumbai";
            if (origin.compare(destination) == 0)
            {
                cout << "Destination and origin can not be the the same!" << endl;
                cout << "Returning to the previous menu." << endl;
                flights();
            }
            cout << "There are 2 flights to Mumbai:-" << endl
                 << endl;
            cout << "1.6E 7645-Indigo Airlines Fare=Rs 8867." << endl;
            cout << "2.G8 346-Go First Air Fare=7645" << endl
                 << endl;
            cout << "Choose your airline:";
            cin >> deschoice;
            cout << endl;
            if (deschoice == 1)
            {
                charges = 8867;
                airln = "6E 7645-Indigo Airlines";
            }
            else if (deschoice == 2)
            {
                charges = 7645;
                airln = "G8 346-Go First Air";
            }

            else
            {
                cout << "Invalid Choice returning to the previous menu" << endl;
                flights();
            }
            break;

        case 3:
            destination = "Bengaluru";
            if (origin.compare(destination) == 0)
            {
                cout << "Destination and origin can not be the the same!" << endl;
                cout << "Returning to the previous menu." << endl;
                flights();
            }
            cout << "There are 3 flights to Bengaluru:-" << endl;
            cout << "1.6E 5478-Indigo Airlines Fare=Rs 7899." << endl;
            cout << "2.G8 322-Go First Air Fare=7997" << endl;
            cout << "3.AI 8566-Air India Fare=9876" << endl
                 << endl;
            cout << "Choose your airline:";
            cin >> deschoice;
            cout << endl;
            if (deschoice == 1)
            {
                charges = 7899;
                airln = "6E 5478-Indigo Airlines";
            }
            else if (deschoice == 2)
            {
                charges = 7997;
                airln = "G8 322-Go First Air";
            }
            else if (deschoice == 3)
            {
                charges = 9876;
                airln = "AI 8566-Air India";
            }
            else
            {
                cout << "Invalid Choice returning to the previous menu" << endl;
                flights();
            }
            break;

        case 4:
            destination = "Hyderabad";
            if (origin.compare(destination) == 0)
            {
                cout << "Destination and origin can not be the the same!" << endl;
                cout << "Returning to the previous menu." << endl;
                flights();
            }
            cout << "There are 3 flights to Hyderabad:-" << endl
                 << endl;
            cout << "1.6E 4571-Indigo Airlines Fare=Rs 9756." << endl;
            cout << "2.G8 555-Go First Air Fare=8323" << endl;
            cout << "3.AI 3437-Air India Fare=11121" << endl
                 << endl;
            cout << "Choose your airline:";
            cin >> deschoice;
            cout << endl;
            if (deschoice == 1)
            {
                charges = 9756;
                airln = "6E 4571-Indigo Airlines";
            }
            else if (deschoice == 2)
            {
                charges = 8323;
                airln = "G8 555-Go First Air";
            }
            else if (deschoice == 3)
            {
                charges = 11121;
                airln = "AI 3437-Air India";
            }
            else
            {
                cout << "Invalid Choice returning to the previous menu" << endl;
                flights();
            }
            break;
        case 5:
            destination = "Kolkata";
            if (origin.compare(destination) == 0)
            {
                cout << "Destination and origin can not be the the same!" << endl;
                cout << "Returning to the previous menu." << endl;
                flights();
            }
            cout << "There are 1 flights to Kolkata:-" << endl
                 << endl;
            cout << "1.G8 901-Go First Air Fare=Rs 7654" << endl
                 << endl;
            cout << "Choose your airline:";
            cin >> deschoice;
            cout << endl;
            if (deschoice == 1)
            {
                charges = 7654;
                airln = "G8 901-Go First Air";
            }
            else
            {
                cout << "Invalid Choice returning to the previous menu" << endl;
                flights();
            }
            break;
        case 6:
            destination = "Varanasi";
            if (origin.compare(destination) == 0)
            {
                cout << "Destination and origin can not be the the same!" << endl
                     << endl;
                cout << "Returning to the previous menu." << endl;
                flights();
            }
            cout << "There are 2 flights to Varanasi:-" << endl
                 << endl;
            cout << "1.6E 8689-Indigo Airlines Fare=Rs 5932." << endl;
            cout << "2.G8 987-Go First Air Fare=Rs 6000" << endl
                 << endl;
            cout << "Choose your airline:";
            cin >> deschoice;
            cout << endl;
            if (deschoice == 1)
            {
                charges = 5932;
                airln = "6E 8689-Indigo Airlines";
            }
            else if (deschoice == 2)
            {
                charges = 6000;
                airln = "G8 987-Go First Air";
            }
            else
            {
                cout << "Invalid Choice returning to the previous menu" << endl;
                flights();
            }
            break;
        default:
            cout << "Invalid Choice returning to the previous menu" << endl;
            flights();
            break;
        }
        cout << "You have successfully chosen your flight" << endl
             << endl;
    }
};
string Selection::airln;
string Selection::origin;
string Selection::destination;
int Selection::charges;
string Selection::date;
class Billing : public Details, Selection
{
public:
    void display()
    {
        int press;
        cout << "Displaying your Ticket" << endl
             << endl;
        cout << "Date of travel:" << date << endl
             << endl;
        cout << "Name:" << Fname << " " << Lname << endl
             << endl;
        cout << "Age:" << age << " ";
        cout << "Gender:" << gen << endl
             << endl;
        cout << "Mobile number:" << address << endl;
        cout << endl;
        cout << "Origin city:" << origin << "   "
             << "Destination city:" << destination << endl
             << endl;
        cout << "Flight name and number:" << airln << endl
             << endl;
        cout << "Total amount to be paid: Rs " << charges << endl
             << endl;
    }
    void print()
    {
        ofstream myfile("Ticket.txt");

        myfile << "\t\t\t\t\t\t-------------FLIGHT TICKET---------------" << endl
               << endl;
        myfile << "\t\t\t\t\t\tDate and time of travel:" << date << "   "
               << "Time:"
               << "9:30 AM" << endl
               << endl;
        myfile << "\t\t\t\t\t\tTermina No:1  Gate No:--" << endl
               << endl;
        myfile << "\t\t\t\t\t\tFlight name and number:" << airln << endl
               << endl
               << endl;
        myfile << "\t\t\t\t\t\t_________Customer Details________" << endl
               << endl;
        myfile << "\t\t\t\t\t\tName:" << Fname << "  " << Lname << "  "
               << "Age:" << age << "  "
               << "Gender:" << gen << endl
               << endl;
        myfile << "\t\t\t\t\t\tMobile Number:" << address << endl
               << endl;
        myfile << "\t\t\t\t\t\tTotal amount Paid: Rs " << charges << endl
               << endl;
        myfile << "\t\t\t\t\t\tOrigin City:" << origin << "    "
               << "Destination City:" << destination << endl;
        mainMenu();
    }
};
void mainMenu()
{
    Details obj1;
    Selection obj2;
    Billing obj3;
    int opt;

    int choice1;

    cout << "[ Press 1 to enter details.         ]" << endl;
    cout << "[ Press 2 to select flights.        ]" << endl;
    cout << "[ Press 3 to check billing details. ]" << endl;
    cout << "[ Press 4 to exit this system.      ]" << endl;
    cin >> choice1;
    switch (choice1)
    {
    case 1:
        obj1.register1();
        cout << "Press any number to go back to the main menu" << endl;
        cin >> opt;
        if (opt == 1)
        {
            mainMenu();
        }
        else
        {
            mainMenu();
        }
        break;
    case 2:
        obj2.flights();
        cout << "Press any number to go back to the main menu" << endl;
        cin >> opt;
        if (opt == 1)
        {
            mainMenu();
        }
        else
        {
            mainMenu();
        }
        break;
    case 3:
        obj3.display();
        cout << "Press 1 to print your ticket or else any number to go back to the main menu" << endl;
        cin >> opt;
        if (opt == 1)
        {
            obj3.print();
        }
        else
        {
            mainMenu();
        }
        break;
    case 4:
        cout << "Exiting this system.................." << endl;
        exit(0);
    default:
        cout << "Invalid choice...." << endl;
        break;
    }
}
int main()
{
    cout << endl;
    cout << "--------------WELCOME TO FLIGHT BOOKING SYSTEM------------------" << endl
         << endl;

    Management obj;
    return 0;
}