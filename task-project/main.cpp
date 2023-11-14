#include <iostream>
using namespace std;
class Task{

public:
    Task() {
        taskId = 0;
        arrivalTime = 0;
        processTime = 0;
    }

    Task(int tId, int arrTime, int procTime) {
        taskId = tId;
        arrivalTime = arrTime;
        processTime = procTime;
    }

    int getTaskId() {
        return taskId;
    }

    void setTaskId(int tId) {
        taskId = tId;
    }

    int getArrivalTime() {
        return arrivalTime;
    }

    void setArrivalTime(int arrTime) {
        arrivalTime = arrTime;
    }

    int getProcessTime() {
        return processTime;
    }

    void setProcessTime(int procTime) {
        processTime = procTime;
    }

    void print() {
        cout<< "taskId: " << taskId << " arrivalTime: " << arrivalTime << " processTime: " << processTime<<endl;
    }

private:
    int taskId;
    int arrivalTime;
    int processTime;
};
int arrivalTime = 10;
int processTime = 5;
class ProcessMgt{
public:
        ProcessMgt(int s){
            size = s;
            task = new Task*[size];
            for (int i = 0; i < size; ++i) {
                task[i] = new Task(100*(i+1),arrivalTime+(i*2 +1),processTime+(i*10));
            }
        }

    void print() {
        cout << "size: " << size <<endl;
        for (int i = 0; i < size; ++i) {
            task[i]->print();
        }
    }
    void sort(Task **task, int s){
            cout<<"I am in Sort";

    }
private:
    int size;
    Task **task;
};
int main() {
    ProcessMgt processMgt(5);
    processMgt.print();
    int s = 5;
    Task **task = new Task*[s];
    for (int i = 0; i < s; ++i) {
        task[i] = new Task(100*(i+1),arrivalTime+(i*2 +1),processTime+(i*10));
    }
    processMgt.sort(task, s);
    return 0;
}
