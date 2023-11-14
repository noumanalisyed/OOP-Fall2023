#include <iostream>
#include "person.h"
#include "date.h"
#include "time.h"
#include "appointment.h"

using namespace std;
int main() {
    Person   person("Ahmad","Ali","54840");
    Date  date(10,2,2023);
    Time time(12,45);

    DentalAppointment  dentalAppointment(person.getFirstName(),person.getLastName(),date.getMonth(),date.getDay(),date.getYear(),time.getHour(),time.getMin(),30);
    dentalAppointment.display();
    return 0;
}
