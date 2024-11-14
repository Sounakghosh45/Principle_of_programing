#include<iostream>
using namespace std;
class Area {
    int side1;
    int side2;
public:
   Area(int a,int b){
       side1=a;
       side2=b;
   }
   int calculatearea(){
       int c= side1*side2;
       cout<<c<<" "<<"is the total area:\n";
    }
};
int main() {
    int x,y;
    cout<<"Enter the rectangle side 1:";
    cin>>x;
    cout<<"Enter the rectangle side 2:";
    cin>>y;
    Area react(x,y);
    react.calculatearea();
}