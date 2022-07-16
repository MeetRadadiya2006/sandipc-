#include <iostream>
using namespace std;
class skill
{
    int fees,n;
    public:
    skill(int);
    void deposite(int);
    int showfees();
};
skill::skill(int amt)
{
    fees = amt;
}
void skill::deposite(int amt)
{
    fees =amt+ amt;
}
int skill::showfees()
{
    return fees;
}
int main()
{
     string name;
    int age, z, x, y;
    int dep,n;
    int case1=10000,case2=12000,case3=20000,case4=22000,case5=30000,case6=34000;
    float mobile;
    skill me1(0/30000);
                    cout<<"\n fees : "<<me1.showfees();
                    cout<<"/"<<case5;do{
                        cout<<"\n Enter 1 for Deposite ";
                        cout<<"\n Enter 2 for Show fees ";
                        cout<<"\n Enter 0 for Exit ";
                        cout<<"\n Enter your choice : ";
                        cin>>n;
                        switch(n)
                        {
                            case 1:
                                cout<<"\n Enter Deposite : ";
                                cin>>dep;
                                if (dep>0&&dep<30001)
                                {
                                    me1.deposite(dep);
                                    cout<<"\nNow your fees : "<<me1.showfees();
                                    cout<<"/"<<case5;
                                }
                                else
                                {
                                    cout<<"can't access";
                                }
                            break;
                            case 2:
                                cout<<"\n Show fees : "<<me1.showfees(); 
                                break;
                            case 0:
                                cout<<"\n Exit ";
                                return 0;
                            break;
                            default:
                                cout<<"\n Envalid choice ";
                        }
                        n++;
                    }while(n<=10);
}