#include <QCoreApplication>
#include <iostream>

using namespace std;

int Sum(int a){
    if(a == 0)
        return 0;
    if(a == 1)
        return 1;
    qDebug()<<a;
    return a + Sum(a-1);
}

int main()
{
    qDebug()<<Sum(9);
}
