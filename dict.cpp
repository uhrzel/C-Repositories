#include <iostream>

using namespace std;

class myProblem
{
private:
    int a;
    int b;

public:
    void setAdd(int x, int y)
    {
        a = x;
        b = y;
    }
    int getAdd()
    {
        return a + b;
    }
};

int main()
{
    myProblem obj;
    obj.setAdd(5, 10);
    cout << obj.getAdd();
}