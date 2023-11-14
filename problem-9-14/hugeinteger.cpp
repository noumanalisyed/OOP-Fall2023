//
// Created by nouman on 10/31/2023.
//
#include "hugeinteger.h"

HugeInteger::HugeInteger(string n){
    name = n;
    ptr = new int[size];
    sign = '+';
    init();
}
void HugeInteger::input(string data){
    int stringSize = data.length();
    for (int i = size-1, j = stringSize -1; i >= 0 ; --i) {
        if( j >= 0){
            ptr[i] = data[j] - 48;
            j--;
        }
    }
    capacity = stringSize;
}

void HugeInteger::display(){
    bool flag1 = false, flag2 = false;
    cout<<name<<" = ";
    for (int i = 0; i < size; ++i) {
        if(ptr[i] == 0  && flag2 == false){
            flag1 = false;
        }
        else{
            flag1 = true;
            flag2 = true;
        }
        if(flag1 == true && flag2 == true) {
            cout << ptr[i] << " ";
        }
    }
    cout<<endl;
}
int HugeInteger::getSize(){
    return size;
}


void HugeInteger::init(){
    for (int i = 0; i < size; ++i) {
        ptr[i] = 0;
    }
}

HugeInteger HugeInteger::add(HugeInteger h){
    HugeInteger result("Sum");
    int n = 0, c = 0, d = 10 , r = 0;
    for (int i = size-1; i >= 0; i--) {
        n = ptr[i] + h.ptr[i] + c;
        if(n >= 10){
            c = n / d;
            r = n % d;
            result.ptr[i] = r;
        }else{
            result.ptr[i] = n;
            c = 0 ;
        }
    }
    return result;
}
int HugeInteger::getCapacity(){
    return capacity;
}
int HugeInteger::getDigit(int digit){
    return this->getIndex(capacity - digit);
}
void HugeInteger::setDigit(int digit, int value){
    this->setIndex((capacity-digit), value);
}

void HugeInteger::setIndex(int index, int value)
{
    if( (index < capacity) && (index >= 0)){
        if( (value < 10) && (value >= 0))
        {
            this->ptr[index] = value;
        }

        else
        {
            // Alert the user if an incorrect value was specified
            cout<<"setIndex failed: value should be an integer in the range 0-9."<<endl;
        }
    }
    else{
        // Alert the user if the index would have been out of bounds
        cout<<"setIndex failed: index out of bounds.";
    }
}

int HugeInteger::getIndex(int index)
{
    if( (index < capacity) && (index >= 0)){
        return this->ptr[index];
    }
    else{
        // Alert the user that the index is out of bounds
        cout<<"getIndex failed: index out of bounds"<<endl;
        return -1;
    }
}

HugeInteger HugeInteger::sub(HugeInteger h){
    HugeInteger result("Subtraction");
    int i=0,j=0,sub,decrement=0;
    bool check;
    check= this->isGreaterThanEqual(h);
    if(check==true)
    {
        for (i=39;i>=(size - this->capacity);i--)
        {
            result.capacity++;
            if(i==(40 - this->capacity))
            {
                h.ptr[i] = this->ptr[i] - h.ptr[i] - decrement;
                break;
            }
            if((this->ptr[i] - decrement) >= h.ptr[i])
            {
                result.ptr[i] = this->ptr[i] - h.ptr[i] - decrement;
                decrement = 0;
            }
            else
            {
                sub = ( this->ptr[i] - decrement ) + 10;
                result.ptr[i] = sub - h.ptr[i];
                decrement = 1;
            }
        }
    }
    else
    {
        for (i=39;i>=(40- h.capacity);i--)
        {
            result.capacity++;
            if(i == (size - h.capacity))
            {
                result.ptr[i] =h.ptr[i] - this->ptr[i] - decrement;
                break;
            }
            if((h.ptr[i] - decrement )>= this->ptr[i])
            {
                h.ptr[i] = h.ptr[i] - this->ptr[i] - decrement;
                decrement = 0;
            }
            else
            {
                sub = (h.ptr[i] - decrement ) + 10;
                result.ptr[i] = sub - h.ptr[i];
                decrement = 1;
            }
        }
        if(result.ptr[size- result.capacity] !=0 )
            result.ptr[size -this->capacity] =- result.ptr[size - this->capacity];
        else
            result.ptr[(size - this->size)+1] =- result.ptr[(size - this->capacity)+1];

    }
    return result;
}


bool HugeInteger::isGreaterThan(HugeInteger h){
    bool flag = true;
    if(this->capacity > h.capacity){
            flag = true;
    }
    else if(this->capacity < h.capacity){
            flag = false;
    }
    else if(this->capacity == h.capacity ){
        for (int i = size-1; i >= (size - capacity -1); --i) {
            if (this->ptr[i] < h.ptr[i] && flag == true) {
                flag = false;
            }
            if(flag == false)
                break;
        }
    }
    return flag;
}
bool HugeInteger::isGreaterThanEqual(HugeInteger h){
    bool flag = true;
    if(this->capacity > h.capacity){
        flag = true;
    }
    else if(this->capacity < h.capacity){
        flag = false;
    }
    else if(this->capacity == h.capacity ){
        for (int i = size-1; i >= (size - capacity -1); --i)  {
            if (this->ptr[i] < h.ptr[i] && flag == true) {
                flag = false;
            }
            if(flag == false)
                break;
        }
    }
    return flag;
}
bool HugeInteger::isLesserThan(HugeInteger h){
    bool flag = true;
    if(this->capacity < h.capacity){
        flag = true;
    }
    else if(this->capacity > h.capacity){
        flag = false;
    }
    else if(this->capacity == h.capacity ){
        for (int i = size-1; i >= (size - capacity -1); --i) {
            if (this->ptr[i] > h.ptr[i] && flag == true) {
                flag = false;
            }
            if(flag == false)
                break;
        }
    }
    return flag;
}
bool HugeInteger::isLesserThanEqual(HugeInteger h){
    bool flag = true;
    if(this->capacity < h.capacity){
        flag = true;
    }
    else if(this->capacity > h.capacity){
        flag = false;
    }
    else if(this->capacity == h.capacity ){
        for (int i = size-1; i >= (size - capacity -1); --i)  {
            if (this->ptr[i] > h.ptr[i] && flag == true) {
                flag = false;
            }
            if(flag == false)
                break;
        }
    }
    return flag;
}
bool HugeInteger::isEqualTo(HugeInteger h){
    bool flag = true;
    if(this->capacity < h.capacity){
        flag = false;
    }
    else if(this->capacity > h.capacity){
        flag = false;
    }
    else if(this->capacity == h.capacity ){
        for (int i = size-1; i >= (size - capacity -1); --i)  {
            if (this->ptr[i] != h.ptr[i] && flag == true) {
                flag = false;
            }
            if(flag == false)
                break;
        }
    }
    return flag;
}
bool HugeInteger::isNotEqualTo(HugeInteger h){
    bool flag = false;
    if(this->capacity < h.capacity){
        flag = true;
    }
    else if(this->capacity > h.capacity){
        flag = true;
    }
    else if(this->capacity == h.capacity ){
        for (int i = size-1; i >= (size - capacity -1); --i)  {
            if (this->ptr[i] != h.ptr[i] && flag==false) {
                flag = true;
            }
            if(flag == true)
                break;
        }
    }
    return flag;
}