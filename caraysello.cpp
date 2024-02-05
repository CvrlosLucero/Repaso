#include <iostream>
#include <stdlib.h>
#include <time.h>

using namespace std;

int main(){

    float num;

    cout<<"0 para Cara, 1 para Sello"<<endl;

    num = rand()%2;

    cout<<"Le tocó: "<<num;

    return 0;
}