#include <iostream>
#include <math.h>

using namespace std;
int getTwoDigitNo();
int doubleTheNumber(int n);
int reverseTheNumber(int n);
int power(int base, int exp);
int sumTheDigits(int n);
int powerTheSecondDigit(int n);
int powerThree(int n);
int main() {
    srand(time_t (NULL));
    int dbl_digit_no = 0;


    for (int i = 0; i < 10; ++i) {
        dbl_digit_no = getTwoDigitNo();
        cout<<"No "<<i<<" = "<<dbl_digit_no<<"\t";
        cout<<"Double = "<<doubleTheNumber(dbl_digit_no)<<"\t";
        cout<<"power ^2  = "<<power(dbl_digit_no,2)<<"\t";
        cout<<"power ^3  = "<<power(dbl_digit_no,3)<<"\t";
        cout<<"power ^4  = "<<power(dbl_digit_no,4)<<"\t";
        cout<<"DigitsSum  = "<<sumTheDigits(dbl_digit_no)<<"\t";
        cout<<"power the second Digits  = "<<powerTheSecondDigit(dbl_digit_no)<<"\t";
        cout<<"power the Three Digits  = "<<powerThree(dbl_digit_no)<<"\t";
        cout<<"Reverse = "<<reverseTheNumber(dbl_digit_no)<<endl;
    }
    return 0;
}
int getTwoDigitNo(){
    int dbl_digit_no;
    dbl_digit_no = 10 + rand() % 90;
    return dbl_digit_no;
}
int doubleTheNumber(int n){
    return n * 2;
}
int reverseTheNumber(int n){
    int reversed_number = 0, remainder = 0;
    while(n != 0) {
        remainder = n % 10;
        reversed_number = reversed_number * 10 + remainder;
        n /= 10;
    }
    return reversed_number;
}
int power(int base, int exp){
    int p = 1;
    for (int i = 0; i < exp; ++i) {
        p = base * p;
    }
    return p;
}
int sumTheDigits(int n) {
    int sum = 0, remainder = 0;
    while (n > 0) {
        remainder= n % 10;
        sum = sum + remainder;
        n = n / 10;
    }
    return  sum;
}

int powerTheSecondDigit(int n) {
    //int temp1,temp2,temp3;
    if (n < 10 || n>99)
    {
        std::cout << "Incorrect entry for this function" << std::endl;
        return -1;
    }
    else
    {
        return pow(n / 10, n % 10);
    }
   /* if(n >= 10) {
        temp1 = n / 10;
        temp2 = n % 10;
        temp3 = pow(temp1, temp2);
    }
    return temp3;*/
}
int powerThree(int n)
{
    if (n < 100 || n>999 || n%10>4)
    {
        std::cout << "Incorrect entry for this function " << std::endl;
        return -1;
    }
    else
    {
        return pow(n % 100, n % 10);
    }
}