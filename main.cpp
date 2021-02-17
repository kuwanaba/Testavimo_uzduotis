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
        greeting = "Sveikas, " + name + "!";
    }
    else if (name[name.size() - 1] == 'a')
    {
        greeting = "Sveika, " + name + "!"; 
    
    }


    cout << "Nurodykite norimą rėmelio plotį: ";
    int frame_size;
    cin >> frame_size;

     
    for (int i = 0; i < frame_size * 2 + 3; i++)
    {
        if (i == 0 || i == frame_size * 2 + 2)
        {
            for (int i = 0; i < greeting.size() + 2 + frame_size * 2; i++)
                cout << "*";

            cout << endl;


            continue;
        }

        if (i == frame_size + 1)
        {
           string white_space(frame_size, ' ');
           cout << "*" << white_space << greeting << white_space << "*" << endl;


           continue;
        }


        string white_space(greeting.size() + frame_size * 2, ' ');
        cout << "*" << white_space << "*" << endl;
    }


    return 0;
}
