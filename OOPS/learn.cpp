#include<iostream>
using namespace std;
class Employee{

    string Name;
    string Company;
    int Age;
public:
    void setName(string name){
        Name =name;
    }
    string getName(){
        return Name;
    }

    void setCompany(string company){
        Company =company;
    }
    string setCompany(){
        return Company;
    }

    void setAge(int age){
        Age = age;
    }
    int getAge(){
        return Age;
    }

    void IntroduceYourself()
    {
        std::cout<<"Name - "<<Name<<endl;
        std::cout<<"Company - "<<Company<<std::endl;
        std::cout<<"Age - "<<Age<<std::endl;
    }

    // Employee(string name, string company, int age)// constructor
    // {
    //     Name = name;
    //     Company = company;
    //     Age = age;
    // }
};

int main()
{
    // Employee employee1;
    // employee1.Name = "Vivek";
    // employee1.Company = "Vivek.INC";
    // employee1.Age = 18;
    // employee1.IntroduceYourself();

    Employee employee2 = Employee("Mr.X", "Vivek Capital", 24);
    employee2.IntroduceYourself();
}