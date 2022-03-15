#include <iostream>
#include <fstream>
using namespace std;

class Employee
{
    string empname;
    int empid;
public:
    Employee() {}
    Employee(string name, int id) :empname(name), empid(id) {}
    void accept()
    {
        cout << "Enter the Name and Id" << endl;
        cin >> empname >> empid;

    }
    void show()
    {
        cout << "entered info is " << empid << " " << empname << endl;
    }
};
int main()
{
    /*ofstream out("mylog.txt", ios::app);
     out << __date__ << " " << __time__ << " " << __file__<<" "<<__function__<<" " << __line__ <<" " << "this is critical error" << endl;*/
     /* ofstream out;
      out.open("records.txt",ios::out);

      if (out.is_open())
      {
          out << "sachin " << " " << 100 << " " << "india" << endl;
          out << "sachin" << " " << 200 << " " << "india" << endl;
          out << "aiui" << " " << 300 << " " << "india" << endl;
      }
      else
          cout << "unable to write" << endl;
      out.close();*/


      /* ifstream in;
       in.open("records.txt", ios::in);
       string player, country;
       int runs;
       if (in.is_open())
       {
           while (!in.eof())
           {
               in >> player >> runs >> country;
               if (in.eof())
                   break;
               cout << player << " " << runs << " " << country << endl;
           }

       }
       else
           cout << "Unable to read" << endl;
       in.close();*/


    ofstream out;
    out.open("Employee1.txt", ios::out | ios::binary);

    if (out.is_open())
    {
        Employee e1[3];
        for (int i = 0; i < 3; ++i)
        {
            e1[i].accept();
            out.write((char*)&e1[i], sizeof(e1[i]));
            
        }
    }
    else
        cout << "unable to write" << endl;

    out.close();
    Employee e1[3];
    ifstream in;
    in.open("Employee1.txt", ios::in | ios::binary);

    if (in.is_open())
    {
        for (int i = 0; i < 3; ++i)
        {
            in.read((char*)&e1[i], sizeof(e1[i]));
        }
    }
    else
        cout << "unable to write" << endl;
    in.close();
    for (int i = 0; i < 3; ++i)
    {
        e1[i].show();
    }


    return 0;
}


