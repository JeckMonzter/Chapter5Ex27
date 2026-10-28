#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    int population;
    int numberOfStars;
    fstream file;
    file.open("people.txt");
    if (file.is_open())
        while (file >> population)
        {
            numberOfStars = population / 1000;
            for (int i = 0; i < numberOfStars; i++)
                cout << '*';
                cout << endl;
        }


}

