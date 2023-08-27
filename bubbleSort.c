#include <stdio.h>
#include <stdlib.h>

void display(int arr[],int n){
    for (int i =0; i<n; i++){
        printf("%d ",arr[i]);
    }
}


int main(){
    int n;
    printf("Enter the value of n : ");
    scanf("%d",&n);
    int arr[n];

    for (int i =0; i<n; i++){
        arr[i] = rand()%n;
    }
    display(arr,n);
    printf("\n");
    printf("\n");
    
    // bubble sort
    for (int i = 0; i<n-1;i++){
        for (int j =0; j<n-i-1; j++){
            if (arr[j]>arr[j+1]){
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
    display(arr,n);

    return 0;

}