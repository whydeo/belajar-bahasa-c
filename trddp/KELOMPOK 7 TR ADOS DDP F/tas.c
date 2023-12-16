#include <stdio.h>

void x(int y){
    if (y <= 1)return;

    printf("%d*",y);
    x(y-1);
    printf("%d#",y);
        
    }

int main(){
    int y;
    for (int i = 0; i < 5; i++)
    {
        x(5);
    }
    
}