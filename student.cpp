#include <iostream>
using namespace std;
class student
{
    
    public:string name;
    public:int age;
};
int main() 
{
    student st;
    st.name="Krishna";
    cout<<"Name:"<<st.name<<endl;
    st.age=24;
    cout<<"age:"<<st.age<<endl;
    return 0;
}
