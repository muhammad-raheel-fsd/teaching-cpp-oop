#include <iostream>
#include <string>
using namespace std;

class Bird{
    private:
    string color;

    public:
    // constructor
    Bird(string bird_color){
        color = bird_color;
        cout << "Bird object created: " << bird_color << endl;
    }

    string get_bird_color(){
        return color;
    }

    // destructor
    ~Bird(){
        cout << "Bird object destroyed" << endl;
    }

};

int main(){
 Bird parrot("green");
 Bird eagle("brown");
 cout << "Parrot color: " << parrot.get_bird_color() << endl;
 cout << "Eagle color: " << eagle.get_bird_color() << endl;
}