#include <iostream>
using namespace std;
static int Count = 0;
class rao {
public:
	rao()
	{
		Count++;
		cout << "No. of object created: " << Count
			<< endl;
	}

	~rao()
	{
		cout << "No. of object destroyed: " << Count  
			<< endl;								 
		Count--;
	}
};
int main()
{
	rao t, t1, t2(t1),y(t2),k(t1),l=t,j;
	return 0;
}
