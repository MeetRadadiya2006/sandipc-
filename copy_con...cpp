#include <iostream>
using namespace std;
class findage
{
    int age;

public:
    findage(int n)
    {
        age = n;
        cout << "\n age : " << age;
    }
    findage(findage &new_age)
    {
        age = new_age.age;
        cout << "\n age :" << age;
    }
};
int main()
{
    int z;
    cout << "entar age :";
    cin >> z;
    findage person1(z);
    findage person2(person1);
    return 0;
}