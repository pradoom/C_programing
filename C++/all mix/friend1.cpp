#include<iostream>
using namespace std;

class uday
{
    int party=98;
    friend class v23be2;
};
class v23be2
{
    public:

    void id1(uday&u1)
    {
        u1.party=55;
        cout<<u1.party<<endl;
    }

    void id2(uday&u1)
    {
        u1.party=11;
        cout<<u1.party<<endl;
    }
                                        
    void id3(uday&u1)
    {   
        u1.party=33;
        cout<<u1.party<<endl;
    }
};
int main()
{
    uday u;
    v23be2 v;

    v.id1(u);
    v.id2(u);
    v.id3(u);
}
