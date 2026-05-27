#include <iOStream>
using namespace std;
int value = 100;

class demo{
    public:
            int value;

        void setvalue(int value){
           this->value = value;
        }

        void printAll(){
            int value = 50;
            cout << "local value: " << value << endl;
            cout<< "Member value: " << this->value <<endl;
            cout << "global value" << ::value <<endl;
        }
};
int main(){
    demo d;
    d.setvalue(200);
    d.printAll();
    return 0;
}