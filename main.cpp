#include <cstdlib>
#include <iostream>
#include "person.h"
using namespace std;

int main()
{
    int j,k;
    cout<<"Vvedite storonu pryamougolnika а = ";
    cin>>j;
       cout<<"Vvedite storonu pryamougolnika b = ";
    cin>>k;
    // создаем объект этого класса
    
    SumRec obj;
    // устанавливаем (передаем данные)
    obj.setDate(j,k);
    cout<<"Ploshad pryamougolnika = ";
    cout<<obj.sumR()<<endl;

 system("pause");
    return 0;
}
