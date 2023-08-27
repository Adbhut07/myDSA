#include <stdio.h>
#include <stdlib.h>

const int n = 900;

void display(int arr[][n]){
    for (int i =0; i<n; i++){
        for (int j =0; j<n; j++){
           printf("%d ",arr[i][j]);
        }
        printf("\n");
    }
    printf("\n");
}


int main(){

    int matrix1[n][n];
    int matrix2[n][n];

    for (int i =0; i<n; i++){
        for (int j =0; j<n; j++){
            matrix1[i][j] = rand()%100;
        }  
    }

    for (int i =0; i<n; i++){
        for (int j =0; j<n; j++){
            matrix2[i][j] = rand()%100;
        }  
    }
    display(matrix1);
    display(matrix2);

    // Multiplying the matrix1 and matrix2
    int ans[n][n];

    for (int i=0; i<n; i++){
        for (int j = 0; j<n; j++){
            ans[i][j] = 0;
            for (int k = 0; k<n; k++){
               ans[i][j] += matrix1[i][k] * matrix2[k][j];
          }
        }
        
    }
    display(ans);

    

    return 0;

}