#include <iostream>
using namespace std;

int main(){

std::cout << "before\n"; 

int array[] = {1,45,10,35,100,13,147,500,80};
int size = sizeof(array)/sizeof(array[0]);
int i,j,min;

for(i = 0 ; i < size ; i++){
    cout<<array[i]<<endl;
}

for (i = 0; i < size ; i++){
    for(j = 0  ; j < size - i ; j++){
        if(array[j] > array[j+1]){
            min = array[j];
            array[j] = array[j+1];
            array[j+1] = min;
        }
    }
}

std::cout << "after\n";
for(i = 0 ; i < size ; i++){
    cout<<array[i]<<endl;
}
return 0;
}
