#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    string food = "Pizzza";

    string *ptr = &food;

    string **ptr = &ptr;

    // *ptr = "Cheese";

    cout << "Normal Food--> " << food << endl;
    cout << "&Food value--> " << &food << endl;
    cout << "ptr value--> " << ptr << endl;
    cout << "*ptr value-->    " << *ptr << endl;
    cout << "**ptr value-->    " << **ptr << endl;
}