// dynamic_cat.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>

using namespace std;

int main()
{

    string s1("Nethra");
    string s3(s1);
    string s4(s1, 3);
    string s5 = s1 + s3;

    // cin >> s1;
     //getline(cin, s1);
    cout << s1 << " " << s3 << " " << s4 << " " << s5 << " " << s1[0] << endl;
    s1[0] = 'K';
    cout << s1 << endl;
    reverse(s1.begin(), s1.end());
    if (s1 == s3)
        cout << "Palindrome" << endl;
    else
        cout << "Not Palindrome" << endl;

}

