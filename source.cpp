#include <iostream>

using namespace std;

void showMenu()
{
    cout << "Health Club Membership Menu\n";
    cout << "1. Standard Adult Membership\n";
    cout << "2. Child Membership\n";
    cout << "3. Senior Citizen Membership\n";
    cout << "4. Quit The Program\n";
}

void showFees(int months, int fees, string memberShip)
{
    cout << "\nTotal Charges For " << months << "-Month " << memberShip << " Membership Are $" << fees << ".00\n";
}

int getChoice(int &choice)
{
    cout << "\nEnter Your Choice: ";
    cin >> choice;
    if (choice > 4 || choice < 1)
    {
        cout << "Invalid Input!\n Please Enter A Valid Choice!";
        getChoice(choice);
    }
    return choice;
}

int getMonths(int& months)
{
    cout << "\nEnter Total Months: ";
    cin >> months;
    if (months <= 0)
    {
        cout << "Invalid Input!\n Please Enter A Valid Number Of Months!";
        getMonths(months);
    }
    return months;
}

int calcFees(int choice, int months)
{
    if (choice == 1)
    {
        return months * 40;
    }

    if (choice == 2)
    {
        return months * 20;
    }

    if (choice == 3)
    {
        return months * 30;
    }
}

string setMembership(int choice)
{
    if (choice == 1)
    {
        return "Standard";
    }

    if (choice == 2)
    {
        return "Child";
    }

    if (choice == 3)
    {
        return "Senior Citizen";
    }
}

int main()
{
   

    while (true)
    {
        showMenu();

        int choice;

        getChoice(choice);


        if (choice == 4)
        {
            return 0;
        }

        int months;

        getMonths(months);

        string memberShip = setMembership(choice);

        showFees(months, calcFees(choice, months), memberShip);
    }

    return 0;
}
