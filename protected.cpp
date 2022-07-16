#include <iostream>
using namespace std;
class car
{
protected:
    int no;

public:
    void set_no(int num)
    {
        no = num;
    }
    int get_no()
    {
        return no;
    }
};
class kia : public car
{
public:
    void letsStart()
    {
        cout << "\n my registration no" << no;
    }
};
int main()
{
    kia seltos;
    seltos.set_no(123);
    seltos.letsStart();
}   