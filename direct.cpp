#include <iostream>
using namespace std;

class Student
{
private:
   char *name;
   int id;
public:
   Student(char *n,int i) : id(i)
   {
       name=new char[strlen(n)+1];
       strcpy(name,n);
   }
   void set_name(char *n)
   {
       delete []name;
       name=new char[strlen(n)+1];
       strcpy(name,n);
   }
   void set_id(int i) { id=i; }
   char* get_name() { return name; }
   int get_id() { return id; }
   void print()
   {
      cout<<"name: "<<name<<endl;
      cout<<"id: "<<id<<endl;
   }
};
void main()
{
   Student std1("JiMyungHwa",2014136124);
   Student std2;
   std2.set_name("MyungWhaJi");
   std2.set_id(2014136124);
   std1.print();
   std2.print();
}
