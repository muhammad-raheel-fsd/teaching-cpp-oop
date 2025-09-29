#include <iostream>
using namespace std;

class Car{
    public:
    void move(){
        gear++;
        speed = speed + 40;
    }
    int getSpeed(){
        return speed;
    }
    int getGear(){
        return gear;
    }
    private:
    int gear=0;
    int speed=0;
};



int main(){
    Car mehran;

    cout << "Mehran: speed=" << "Gear: " << mehran.getGear() << " Speed: " << mehran.getSpeed() << endl;
    // mehran.speed = 100;
    mehran.move();
    cout << "Mehran: speed=" << "Gear: " << mehran.getGear() << " Speed: " << mehran.getSpeed() << endl;
    mehran.move();
    cout << "Mehran: speed=" << "Gear: " << mehran.getGear() << " Speed: " << mehran.getSpeed() << endl;
    mehran.move();
    cout << "Mehran: speed=" << "Gear: " << mehran.getGear() << " Speed: " << mehran.getSpeed() << endl;

} 