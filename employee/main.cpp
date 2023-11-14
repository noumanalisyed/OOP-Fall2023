#include <iostream>
#include "date.h"

using namespace std;

int main() {
    Date date1;
    Date date2(3);
    Date date3(3,7);
    Date date4(8,11,2011);
    //Date date(15,45,2022);
    cout<<endl<<endl;
    date1.print();
    cout<<endl<<endl;
    date2.print();
    cout<<endl<<endl;
    date3.print();
    cout<<endl<<endl;
    date4.print();
    cout<<endl<<endl;
   // date.print();

    return 0;
}
