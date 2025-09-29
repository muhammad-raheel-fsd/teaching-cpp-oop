#include <iostream>
using namespace std;

class Car{
    private:
    int are_system_vitals_up;    private:
    int are_system_vitals_up;
    int is_new;

    public:
    Car(int system_vitals, int is_new_car){
        are_system_vitals_up = system_vitals;
        is_new = is_new_car;
        cout<<"There goes the constructor..."  <<endl;
    }

    void test_system_vitals(){
        cout<<"System vitals: " << are_system_vitals_up <<endl;
        cout<<"Is new: " << is_new <<endl;
    }
};

int main(){
    Car mehran(1, 1);
    Car ford(0, 0);
    Car audi(1, 1);

    mehran.test_system_vitals();
    int is_new;

    public:
    Car(int system_vitals, int is_new_car){
        are_system_vitals_up = system_vitals;
        is_new = is_new_car;
        cout<<"There goes the constructor..."  <<endl;
    }

    void test_system_vitals(){
        cout<<"System vitals: " << are_system_vitals_up <<endl;
        cout<<"Is new: " << is_new <<endl;
    }
};

int main(){
    Car mehran(1, 1);
    Car ford(0, 0);
    Car audi(1, 1);

    mehran.test_system_vitals();
}