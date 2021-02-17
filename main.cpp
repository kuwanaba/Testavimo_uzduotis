#include <iostream>


using namespace std;


int main()
{
    cout << "Įveskite savo vardą: ";

    string name;
    cin >> name;


    string greeting;
    if (name[name.size() - 1] == 's')
    {
        name[name.size() - 1] = 'i';
        greeting = "* Sveikas, " + name + "! *";
    }
    else if (name[name.size() - 1] == 'a')
    {
        greeting = "* Sveika, " + name + "! *"; 
    }

    string message_asterisks;
    string message_asterisks_whites;
    for (int i = 0; i < greeting.size(); i++)
    {
        message_asterisks += "*";

        if (i == 0 || i == greeting.size() - 1)
        {
            message_asterisks_whites += "*";
            continue;
        }

        message_asterisks_whites += " ";
    }


    

    cout << message_asterisks << endl;   
    cout << message_asterisks_whites << endl;
    cout << greeting << endl;
    cout << message_asterisks_whites << endl;
    cout << message_asterisks << endl;


    return 0;
}
