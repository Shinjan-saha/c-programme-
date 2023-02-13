#include<stdio.h>
// selection sort in c
int main(){
    int array[100],n,i,j,temp;
    printf("\n Please enter the total.no of elements : ");
    scanf("%d",&n);
    printf("\n Please enter the array elements");
    for(i=0;i<n;i++)
    scanf("%d",&array[i]);

    for(i=0;i<n;i++){
        for(j=i+1; j<n;j++){
            if(array[i]>array[j]){
                temp=array[i];
                array[i]=array[j];
                array[j]=temp;


            }
        }
    }
    printf("selection sort result : ");
    for(i=0;i<n;i++){
        printf("%d \t",array[i]);
    }
    printf("\n");
    return 0;
}