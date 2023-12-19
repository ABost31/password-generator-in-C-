/*random password genetator*/
#include<iostream>
#include<random>
#include<ctime>

using namespace std;

string pwdgenerator(int num1)
{
    string pwd;
    if (num1 < 12 || num1 > 64)
    {
        cout << "Invalid input. Number must be between 12 and 64 characters long.";
    }
    else
    {
        for (int i = 0; i < num1; i++)
        {
            char ch = rand() % (126 - 33 + 1) + 33; // Generate a random ASCII character between 33 and 126
            pwd += ch;
        }
    }
    return pwd;
}

int main()
{
    srand(time(0));
    int num = 0;

    cout << "This program will generate a password between 12 and 64 characters long." << endl;
    cout << "How long would you like your password to be? " << endl;
    cin >> num;
    string genpass = pwdgenerator(num); // Declare genpass as a string
    cout << genpass << endl;
    return 0;
}