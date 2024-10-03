#include<iostream>
using namespace std;
class atm {
    int acc;
public:
    atm(){
        int balance;
        cout<<"Enter the amount to withdraw";
        cin>>balance;
        acc=balance;
    }
    void display(){
        cout<<acc<<"debited from your account 91xxxx78";

    }
};
int main() {
    atm a;
    a.display();
}