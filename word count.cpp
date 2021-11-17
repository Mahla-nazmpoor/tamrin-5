#include<iostream>
#include<string.h>
using namespace std;
int main ()
{
    char str[100];
    int count = 0; 
    cout << "Enter a string : ";
    gets(str);
    for (int i = 0; str[i] != '\0';i++)
    {
        if (str[i] == ' ')
            count++;    
    }
    cout << "Number of words in the string : " << count + 1;
    return 0;
}