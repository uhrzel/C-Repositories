#include <iostream>
using namespace std;

class myProblem
{
private:
    int age;

public:
    void setAge(int n)
    {
        age = n;
    }
    int getAge()
    {
        return age;
    }
};
int main()
{
    myProblem obj;
    obj.setAge(500);

    cout << obj.getAge();

    return 0;
}