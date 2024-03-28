#include<iostream>
using namespace std;
class Box {
    private:
    int l,b,h;
    
    public:
    void setDimensions(int l,int b,int h) {
        this->l=l ,this->b=b,this->h=h;
    }
    void showDimensions() {
        cout << l << b << h;
    }
};
int main() {
    Box smallBox;
    Box *p;
    p = &smallBox;
    p -> showDimensions();
    return 0;
}