#include<stdio.h>
// Insertion problem in c 
int main(){
    int array[100],i,j,n,elements;
    printf("\n enter the elements : ");
    scanf("%d",&n);
    printf("\n Enter the array elements: ");
    for(i=0;i<n;i++)
          scanf("%d",&array[i]);
    for(i=1;i<=n-1;i++){
        for(j=i;j>0 && array[j-1]>array[j];j--){
            elements =array[j];
            array[j]=array[j-1];
            array[j-1]=elements;

        }
    }      
    printf("\n Insertion sort result : ");
    for(i=0;i<n;i++){
        printf("%d \t",array[i]);
    }
    printf("\n");
    return 0;
}