#include <iostream>
using namespace std;

class OldManClass{
public:
    //constructors
    OldManClass(){
        color = "invisible";
    }
    OldManClass(string _color, string _name){
        color = _color;
        name = _name;
    }
    //Member method, function, behaviors, procedures
    void coolSaying(){
        cout << "You should not go alon, Take this " << color << name << endl;
    }
    //getterc
    string getName(){
        return name;
    }
    string getColor(){
        return color;

    }
    //setter
    void setName(string _name){
        name = _name;
    }
    void setColor(string _color){
        color = _color;
    }

private:
    //data members, attribute, properties, variables
    string color;
    string name;
};

int main() {
    std::cout << "Hello, World!" << std::endl;
    //instantite a BuckysDucky object
    OldManClass sam;
    OldManClass pam("pink ","Excaliber");
    OldManClass jack("Black ","Master Sword");

    sam.coolSaying();
    pam.coolSaying();
    jack.coolSaying();
    OldManClass OldMansObject;
    //OldMansObject.coolSaying();
    //OldMansObject.setColor("blue");
    //cout << "Old man is " << OldMansObject.getColor() << endl;

    return 0;
}