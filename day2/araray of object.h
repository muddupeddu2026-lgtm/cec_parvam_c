#include<iostream>
#include<string>
using namespace std;
class student {
    public:
        string name;
        int marks;
        
        student() { name="unknown"; marks=0;}
        student(string n, int m) { name=n;marks=m;}
             
        void display() {
            cout<<"Name:"<<name<<endl;
            
        }
    };

int main() {
    student batch1[3] = {
        student("Alice", 85),
        student("Bob", 90),
        student("Charlie", 78)
    };

    cout<<"batch 1(stack array):"<<endl;
    for(int i=0; i<3; i++) {
        batch1[i].display();
    }
    student* batch2 = new student[3] {
        student("David", 92),
        student("Eve", 88),
        student("Frank", 80)
    };

    cout<<"\nbatch 2(heap array):"<<endl;
    for(int i=0; i<3; i++) {
        batch2[i].display();
    }

    delete[] batch2;
    return 0;
}    
