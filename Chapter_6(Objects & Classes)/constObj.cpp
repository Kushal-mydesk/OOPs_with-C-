#include<iostream>
using namespace std;

class Distance
{
    private:
        int feet;
        float inches;
    public:
        Distance(int ft, float in): feet(ft),inches(in)
            {}
        void getdist()
        {
            cout << "\nEnter feet:" ; cin >> feet;
            cout << "\nEnter inches: ";cin >> inches;
        }

        void showdist() const 
        {
            cout << feet <<"\'-" << inches << '\"';
        }
};

int main(){
    const Distance football(300,0);
    //footbal.getdist();
    football.showdist();
    cout << endl;
    return 0;

}

