#include <iostream>
using namespace std;
class con
{
    int n;

public:
    con(int n)
    {
        this->n = n;
        cout << "\n constructor called :" << n;
    }
    ~con()
    {
        cout << "\n destructor called :" << n;
    }
};
int main()
{
    con c1(1), c2(2), c3(3);
}