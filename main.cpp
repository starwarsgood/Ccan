#include <cstdlib>
#include <iostream>
#include "person.h"
using namespace std;

int main()
{
    int j,k;
    cout<<"Vvedite storonu pryamougolnika � = ";
    cin>>j;
       cout<<"Vvedite storonu pryamougolnika b = ";
    cin>>k;
    // ������� ������ ����� ������
    
    SumRec obj;
    // ������������� (�������� ������)
    obj.setDate(j,k);
    cout<<"Ploshad pryamougolnika = ";
    cout<<obj.sumR()<<endl;

 system("pause");
    return 0;
}
