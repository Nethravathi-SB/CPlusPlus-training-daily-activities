#include <iostream>
#include <memory>
#include <crtdbg.h>
using namespace std;
//1.auto_ptr, 2.shared_ptr,3.unique_ptr,4.weak_ptr
int main()
{
    shared_ptr<int> ptr{ new int };
    cin >> *ptr;
    cout << *ptr << endl;
    cout << ptr.use_count() << endl;
    shared_ptr<int> newptr = ptr;//sharing resources 
    cout << *newptr << " " << newptr.use_count() << endl;;

    unique_ptr<int>myuniq1{ new int(100) };
    unique_ptr<int>myuniq2 = move(myuniq1);//assigning ownership to myuniq2

    cout << *myuniq2 << endl;
    //cout << *myuniq1 << endl; //we will get crash aleardy assigned ownership to myuniq2
   
    return 0;
}