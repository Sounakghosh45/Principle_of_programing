#include <iostream>
using namespace std;
class Wall {
private:
    double* length;
    double* height;
public:
    Wall(double len = 1.0, double hgt = 1.0)
            : length{new double{len}}
            , height{new double{hgt}} {
    }
    Wall(const Wall& obj)
            : length{new double{*(obj.length)}}
            , height{new double{*(obj.height)}} {
    }
    void setLength(double len) {
        *length = len;
    }

    double calculateArea() {
        return *length * *height;
    }
    ~Wall() {
        delete length;
        delete height;
    }
};

int main() {
    Wall wall1(10.5, 8.6);
    Wall wall2 = wall1;
    wall2.setLength(11.5);
    cout << "Area of Wall 1: " << wall1.calculateArea() << endl;
    cout << "Area of Wall 2: " << wall2.calculateArea();
    return 0;
}
