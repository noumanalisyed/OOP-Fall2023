#include <iostream>
#include <iomanip>
#include "date.h"

using namespace std;

#include "time.h"
#include "date.h"
#include "person.h"
#include "appointment.h"



int main() {
    DentalAppoitment dentalAppoitment("Ahmad","Ali",1,26,2023,11,30,30);

    cout<<dentalAppoitment<<endl;
    return 0;
}
