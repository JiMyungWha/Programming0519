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
class Computer : public Student
{
private:
   int member;
public:
   Computer(char *n,int i,int m) : Student(n,i),member(m) {}
   void print()
   {
      Student::print();
      cout<<"member:"<<member<<endl;
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
   Student std3;
   std3.set_name("JMH");
   std3.set_id(24);
   std3.print();
   Computer com1("J_M_H",2014136124,24);
   com1.print();
}
