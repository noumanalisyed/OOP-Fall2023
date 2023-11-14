#include <cstdlib>
#include <iostream>
using namespace std;
float inputVotes(string arr[],int v[],int s);
void outputVotes(string arr[],int v[],int s,int total);
int main()
{
    string array1[5];
    int votes[5];
    int i;
    float total = 0;
    total = inputVotes(array1,votes,5);
    cout<<"Result"<<endl;
    outputVotes(array1,votes,5,total);
    system("PAUSE");
    return EXIT_SUCCESS;
}
float inputVotes(string arr[],int v[],int s){
    float total=0.0;
    for(int i=0;i<5;i++)
    {
        cout<<"enter last name"<<endl;
        cin>>arr[i];
        cout<<"enter votes received"<<endl;
        cin>>v[i];
        total=total+v[i];
    }
    return total;
}
void outputVotes(string arr[],int v[],int s,int total){
    cout<<"Candidate\t"<<" Votes Received\t % of Total Votes"<<endl;
    for(int i=0;i<5;i++){
        cout<<arr[i]<<"\t\t"<<v[i]<<"\t\t"<<(float)(v[i]*100.0)/total<<endl;
    }
    cout<<"\nTotal = "<<total<<endl;
}
