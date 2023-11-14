#include <algorithm>
#include <iostream>
using namespace std;
int findUniqueElementsCount(int array[], int size);
int main(){
    int data[] = { 9,8,7,4,5,6,2, 2, 1, 1 };
    int size = sizeof(data) / sizeof(data[0]);
    cout <<"count is "<<findUniqueElementsCount(data, size);
    return 0;
}
int findUniqueElementsCount(int array[], int size){
    // Built in Sorting the array function
    sort(array, array + size);
    // find the unique elements and traverse the sorted array
    int count = 0;
    for (int i = 0; i < size; i++){
        // not counting the index when duplicate is found
        while (i < size - 1 && array[i] == array[i + 1]){
            i++;
        }
        count++;
    }
    return count;
}

