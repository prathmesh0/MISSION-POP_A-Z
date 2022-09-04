#include<iostream>
using namespace std;

void func(int x, int y){
    int t;
    t = x;
    x = y;
    y = t;
    cout<<"x = "<<x<<" y = "<<y<<endl;
}

int main(){
    int x = 3, y= 9;
    func(x,y);
    cout<<"x = "<<x<<" y = "<<y<<endl;
    return 0;
}