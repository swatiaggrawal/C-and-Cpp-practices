#include<stdio.h>
#include<stdlib.h>
int main(){
    int a[10][10]={{1,2,3,4,5},{6,7,8,9,10}};
    int i=0;
    
    while(i<2){
        int j=0;
        while(j<5){
            printf("\t %d",a[i][j]);
            j++;
        }
        printf("\n");
        i++;
    }
}