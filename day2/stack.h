#include<iostream>
using namespace std;

class demo {
    public:
        int id;
        demo(int i) {
            id = i;
            cout << "Constructor called for object: " << id << endl;
        }
        ~demo() {
            cout << "Destructor called for object: " << id << endl;
        }
};
int main() {
    cout<<"----static object----"<<endl;
    demo stackobj(1);
    cout<<"\n---heap object---"<<endl;
    demo* heapobj = new demo(2);
    cout<<"\n stack object goes out of scope automatically...."<<endl;
    cout<<"heap object needs to be deleted explicitly...."<<endl;
    delete heapobj;
    cout<<"\n end of main function...."<<endl;
    return 0;
}