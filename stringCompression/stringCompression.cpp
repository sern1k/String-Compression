#include <iostream>
#include <stdlib.h>

using namespace std;

int main()
{
    system("cls");
    cout << "What do you want to do? Choose the number." << endl;
    cout << "1. Compression \n2. Decompression \n3. Exit" << endl;
    int choice;
    cin >> choice;
    switch (choice)
    {
        case 1:
        {
            system("cls");
            cout << "Enter text to compress" << endl;
            string text;    //text to compress
            cin >> text;

            for (int i = 0; i < text.length(); i++) //loop responsible for checking if it did not go beyond the string
            {
                int n = 1;  //number of repeated letters, initially it is always 1

                while (text[i] == text[i + 1])  //loop responsible for checking if "i" letter and "i+1" letter are the same
                {
                    n++;    //if they are the same the number of repeated letters changes
                    i++;    //goes to the next letter
                }

                cout << text[i] << n;   //prints the letter and the number of it repeats
            }
            cout << "\n\n";
            system("PAUSE");
            main();
            break;
        }
        case 2:
        {
            system("cls");
            cout << "Enter text to decompress" << endl;
            string text;    //text to decompress
            cin >> text;

            for (int i = 0; i < text.length(); i=i+2) //loop responsible for checking if it did not go beyond the string; i=i+2 because every two characters in the string will be a letter and every 2 characters a number
            {
                char d = text[i + 1];   //assigning the number under text[i+1] to the extra variable of type char
                int number = d - '0';   //convert the extra variable char to int
                for (int n = 0; n < number; n++)  //loop that prints a letter a specified number of times
                {
                    cout << text[i];
                }
            }
            cout << "\n\n";
            system("PAUSE");
            main();
            break;
        }
        case 3:
            system("cls");
            cout << "See you later!\nPress any button to exit"<<endl;
            exit(0);
        default:
        {
            cout << "\nInvalid option" << endl;
            cout << "\n\n";
            system("PAUSE");
            main();
            break;
        }
    }
}