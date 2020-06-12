#include<iostream>
using namespace std;
int main()
{
      int number;
      int space;
      cout<<"enter a number";
      cin>>number;
       for(int i = 1, k = 0; i <= number; i++, k = 0)
    {
        for(space = 1; space <= number-i;space++)
        {
            cout <<"  ";
        }

        while(k != 2*i-1)
        {
            cout << "* ";
            ++k;
        }
        cout << endl;
    }    
	return 0;
}
