#include <iostream>
using namespace std;

int main(){
    int i, j, kolom=5;
    for (i=1; i<=kolom; i++){
        for ( j=i; j<=kolom; j++){
            cout<<j;
        }
        cout<<endl;
    }
}
