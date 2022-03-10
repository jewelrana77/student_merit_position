#include<bits/stdc++.h>
using namespace std;
class student
{
public:
    string name;
    int roll;
    float cgpa;
    public:
    void printinfo()
    {
     cout<<"name:";
     cout<<name<<endl;
     cout<<"roll:";
     cout<<roll<<endl;
     cout<<"cgpa:";
     cout<<cgpa<<endl;
    }
};
int main()
{
    //student array //
    student st[10];
    for(int i=0; i<10; i++)
    {
        cout<<"name:";
        cin>>st[i].name;
        cout<<"roll:";
        cin>>st[i].roll;
        cout<<"cgpa:";
        cin>>st[i].cgpa;

system("cls");
}
//merit position disending order swap function//
int i=0;
 while(i<9){

if(st[i].cgpa>st[i+1].cgpa)
{
swap(st[i].cgpa,st[i+1].cgpa);
    }
    //student information output//
    for(int i=0; i<10; i++)
    {

        st[i].printinfo();
    }

}
return 0;
}
