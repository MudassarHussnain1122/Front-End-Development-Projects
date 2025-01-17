#include<iostream>
using namespace std;
class student()
{
private: 
string name;
int GPA;
double Student_id;

public:

//constructor

student(string n,int gpa,double id)
{
name = n;
GPA = gpa;
Student_id=id;



}

void getinfo const()
{
return "name"+name+"Gpa"+to_string(GPA)+"Student id "+to_string(Student_id)

}
void updateinfo(newgpa)
{

GPA = newgpa;

}
void Honor()
{

    if(GPA>=3.5)
    {
        cout<<"Honor";
    }
    else
    {
        cout<<"Not Honor";
    }
}




};

int main()
{

student s1("Mudassar",3.5,"70147115")
s1.getinfo()
cout<<"get info "<<s1.getinfo<<endl;



}