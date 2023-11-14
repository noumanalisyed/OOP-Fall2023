#include <iostream>
using namespace std;
const int row = 4, col = 4;
const int rowPair = 8, colPair =2;
void loadInitializedDeck(int d[][4]);
void display(int d[][4]);
void displayConfiscate(int d[][4],int s,int deck[][4],int r,int c);
bool getStatus(int p[][2],int r,int c);
char getInput();
void search(int sd[][4],int r,int c, char ch);
int searchRowIndex = -1, searchColIndex = -1;

int main() {
    srand(time_t(NULL));
    int deck[row][col] = {
            {0,0,0,0},
            {0,0,0,0},
            {0,0,0,0},
            {0,0,0,0}
    };
    int data [16][4] = {{'A',0,0,0},{'B',0,1,0},{'C',0,2,0},{'D',0,3,0},
                        {'E',1,0,0},{'F',1,1,0},{'G',1,2,0},{'H',1,3,0},
                        {'I',2,0,0},{'J',2,1,0},{'K',2,2,0},{'L',2,3,0},
                        {'M',3,0,0},{'N',3,1,0},{'O',3,2,0},{'P',3,3,0}
                        };

    loadInitializedDeck(deck);
    displayConfiscate(data,16,deck,row,col);
    cout<<endl;
    for (int i = 0; i < 10; ++i) {
        char input = getInput();
        search(data, 16, 3, input);
        displayConfiscate(data, 16, deck, row, col);
    }
    cout<<endl<<endl;
    display(deck);

    return 0;
}
void displayConfiscate(int d[][4],int s,int deck[][4],int r,int c){

    int row = searchRowIndex, col = searchColIndex;
    for (int i = 0; i < 16; ++i) {
        if(i != 0 && i % 4 == 0) {
            cout << endl;
        }
            if(d[i][1] == row && d[i][2] == col && searchRowIndex != -1 && searchColIndex != - 1){
            cout << deck[searchRowIndex][searchColIndex] << "   ";
            searchRowIndex = -1;
            searchColIndex = -1;
        }
        else {
            cout << (char) d[i][0] << "   ";
        }
    }
    cout<<endl<<endl;
}
void display(int d[][4]){
    for (int i = 0; i < row; ++i) {
        for (int j = 0; j < col; ++j) {
            cout<<d[i][j]<<"  ";
        }
        cout<<endl;
    }
}

void loadInitializedDeck(int d[][4]){
    int pair [rowPair][colPair] = {
            {1,0},
            {2,0},
            {3,0},
            {4,0},
            {5,0},
            {6,0},
            {7,0},
            {8,0}
    };

    for (int i = 0; getStatus(pair,rowPair,colPair) != true; ++i) {
        int no = 1 + rand() % rowPair;
        if(pair[no-1][1] < colPair ){

            int r = rand() % row;
            int c = rand() % col;
            if (d[r][c] == 0 && pair[no-1][1] < colPair){
                pair[no-1][1]++;
                d[r][c] = no;
            }
        }
    }
}
bool getStatus(int p[][2],int r,int c){
    bool status = true;
    for (int i = 0; i < r; ++i) {
        if(p[i][1] < 2)
          status = false;
    }
    return status;
}
char getInput(){
    char ch;
    cout<<"Enter the No ";
    cin>>ch;
    return ch;
}
void search(int sd[][4],int r,int c, char ch){
    int i = 0;
    while (i < r){

            if(sd[i][0] == ch){
                searchRowIndex = sd[i][1];
                searchColIndex = sd[i][2];
                sd[i][3] = 1;
            }
        i++;
    }
}