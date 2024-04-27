/*Petya started to attend programming lessons. On the first lesson, the teacher taught him to write a simple program 
that reads a string from the input and determines whether the given string is a palindrome. A word is considered to be a palindrome
if it reads the same backward as forward. However, this time, Petya needs to write a program that capitalizes the first letter of the input word*/
#include <iostream>
#include <string>
#include <cstring>
using namespace std;
int main()
{
    string word;
    int  a, c = 0;
    int n1;
    char firstLetter;

    cout << "enter the word\n";
    getline(cin, word);

    a = word.length();

    // spechal

    if (a == 4)
    {
        if (word[0] == word[3] && word[1] == word[2])
        {
            cout << "string is a palindrome\n";
        }
        else
        {
            cout << "string is not a palindrome\n";
        }
    }
    else if (a == 3)
    {
        if (word[0] == word[2])
        {
            cout << "string is a palindrome\n";
        }
        else
        {
            cout << "string is not a palindrome\n";
        }
    }

/////////////////////////////////////////////////////////////////////////

    else if (a % 2 == 0)
    {  
        cout << "string is not a palindrome\n";
    }
    else
    {
        n1 = (a + 1) / 2;

        for (int i = 0; i < n1; i++)
        {
            if (word[i] == word[i + 3])
            {
                c++;
            }
        }

        if (c == n1)
        {
            cout << "string is a palindrome\n";
        }
        else
        {
            cout << "string is not a palindrome\n";
        }
    }

    firstLetter = word[0];

    cout << "the first letter is : " << firstLetter << endl;
  
    word[0] = toupper(firstLetter);

    cout << "the word is : " << word;
}