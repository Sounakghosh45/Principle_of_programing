#include <iostream>
using namespace std;
class Rectangle {
private:
    int length;
    int width;
public:
    Rectangle(int l,int w) {
        length=l;
        width=w;
        cout << "Constructor called!" << endl;
    }
    Rectangle(const Rectangle &rect) {
        length = rect.length;
        width = rect.width;
        cout << "Copy constructor called!" << endl;
    }
    int area(){
        int c=length*width;
        cout<<c;
    }
    void display() {
        cout << "Length: " << length << ", Width: " << width << endl;
        cout << "Area: " << area() << endl;
    }
};

int main() {
    int x,y;
    cout << "Enter Length of Reactangle" << endl;
    cin>>x;
    cout << "Enter Width of Reactangle" << endl;
    cin>>y;
    Rectangle rect1(x,y);
    Rectangle rect2 = rect1;
    rect1.display();
    rect2.display();

    return 0;
}