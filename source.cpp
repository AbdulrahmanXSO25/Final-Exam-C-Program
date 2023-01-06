#include <iostream>

using namespace std;

string MemberShips[] = { "Standard Adult", "Child", "Senior Citizen"}; 

const short length = size(MemberShips);

int Fees[length] = { 40, 20, 30};

void showMenu()
{
    cout << "Health Club Membership Menu\n";
    for (int i = 0; i < length; i++)
    {
        cout << i + 1 << ". " << MemberShips[i] << " Membership" << endl;
    }
    cout << length + 1 << ". Quit The Program\n";
}

int getChoice(int& choice)
{
    cout << "\nEnter Your Choice: ";
    cin >> choice;
    if (choice > length + 1 || choice < 1)
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

int calcFees(int months, int choice)
{
    return (months * Fees[choice - 1]);
}

void showFees(int months, int choice, int fees)
{
    cout << "\nTotal Charges For " << months << "-Month " << MemberShips[choice - 1] << " Membership" << " Are $" << fees << ".00\n";
}

int main()
{

    int choice, months;

    while (true)
    {
        showMenu();

        getChoice(choice);

        if (choice == length + 1)
        {
            cout << "\nYou Are Welcome!";
            return 0;
        }

        getMonths(months);


        showFees(months, choice, calcFees(months, choice));

        cout << "\nYou Are Welcome!\n\n*********\n";
    }

    return 0;
}
