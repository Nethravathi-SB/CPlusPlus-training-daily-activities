// STL.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include<string>
#include<vector>
#include<algorithm>
#include<array>
#include<list>
#include<deque>
#include<set>
#include<map>
using namespace std;

class Employee
{
    int empid;
    string name;
public:
    Employee() { cout << "destructor" << endl; }
    Employee(int id, string ename) :empid(id), name(ename) {}
    bool operator<(const Employee& e)const //sorting algorithm
    {
        return name < e.name;
    }
    bool operator==(const Employee& e)const ////this has to be const
    {
        return name == e.name;
    }
    void accept()
    {
        cout << "enter empid and empname" << endl;
        cin >> empid >> name;
    }
    void show() const
    {
        cout << empid<<" "<< name << endl;
        
    }
};
void show_global(int x)
{
    cout << "using show " << x << endl;
}

int main()
{
        /* vector<int> v1{1,2,3,4,5};
         cout << v1.size()<<endl;
         cout << v1.capacity() << endl;
         v1.push_back(100);
         v1.push_back(200);
         v1.push_back(300);

         for (int i = 0;i < v1.size();i++)
             cout << v1[i] << " " << v1.at(i) << endl;

         cout << "Using iterator " << endl;
         for (vector<int>::iterator itr = v1.begin();itr != v1.end();++itr)
             cout << *itr << endl;
        
         cout << "Using iterator " << endl;
         for (vector<int>::reverse_iterator itr = v1.rbegin();itr != v1.rend();++itr)
             cout << *itr << endl;
         for_each(v1.begin(), v1.end(), show_global);
         v1.pop_back();
         v1.insert(v1.begin(), 99);
        v1.erase(v1.begin(), v1.end() - 2);
         for (auto i : v1)
           cout << i << endl;*/
             /*vector<Employee> v1(7);
             v1[0] = Employee(100, "Nethra");
             v1[1] = Employee(200, "kavya");
             v1[2] = Employee(300, "Bhuthes");
             v1.push_back(Employee(400, "Lakshmi"));

             auto itr = find(v1.begin(), v1.end(), Employee(300,"kavya"));
             if (itr != v1.end())
                 cout << "Element is present" << endl;
             else
                 cout << "Element is not present" << endl;
             cout << "Employee Records" << endl;
             for (vector<Employee>::iterator itr = v1.begin();itr != v1.end();++itr)
                 itr->accept();
             for (vector<Employee>::iterator itr = v1.begin();itr != v1.end();++itr)
                 itr->show();
             cout << v1.capacity();
             
              std::sort(v1.begin(), v1.end());*/
              /*vector<int> v3{1,2,3,4,5};
              auto itr = find(v3.begin(), v3.end(), 6);
              if (itr != v3.end())
                  cout << "Element is present" << endl;
              else
                  cout << "Element is not present" << endl;*/

                  /*list<int> mylist;
                  for (int i = 1;i < 10;i++)
                      mylist.push_back(i * 10);
                  for (auto i : mylist)
                      cout << i << endl;*/

                  /*set<Employee> myset;
                  myset.insert(Employee(100, "nethra"));
                  myset.insert(Employee(200, "kavya"));
                  myset.insert(Employee(300, "nagu"));
                  myset.insert(Employee(400, "aruna"));
                  myset.insert(Employee(500, "aruna"));
                  for (set<Employee>::iterator itr = myset.begin();itr != myset.end();++itr)
                      itr->show();*/
                /* multiset<Employee> myset;
                 myset.insert(Employee(100, "nethra"));
                 myset.insert(Employee(200, "kavya"));
                 myset.insert(Employee(300, "nagu"));
                 myset.insert(Employee(400, "aruna"));
                 myset.insert(Employee(400, "aruna"));
                 for (multiset<Employee>::iterator itr = myset.begin(); itr != myset.end(); ++itr)
                     itr->show();*/

        /*map<string, int> mymap;
        mymap.insert(pair<string, int>("Nethra", 10));
        mymap.insert(pair<string, int>("Kavya", 20));
        mymap.insert(pair<string, int>("Lakshmi", 10));
        mymap.insert(pair<string, int>("Bhuthesh", 30));
        mymap.insert(make_pair("Bhuthesh", 30));

        for (map<string, int>::iterator itr = mymap.begin(); itr != mymap.end(); ++itr)
            std::cout << itr->first << " " << itr->second << std::endl;*/
        multimap<string, int> mymap;
        mymap.insert(pair<string, int>("Nethra", 10));
        mymap.insert(pair<string, int>("Kavya", 20));
        mymap.insert(pair<string, int>("Lakshmi", 10));
        mymap.insert(pair<string, int>("Bhuthesh", 30));
        mymap.insert(make_pair("Bhuthesh", 40));

        for (multimap<string, int>::iterator itr = mymap.begin(); itr != mymap.end(); ++itr)
            std::cout << itr->first << " " << itr->second << std::endl;
        return 0;

}

