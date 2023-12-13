#include <stdio.h>

typedef struct Sparse{
    int row;
    int col;
    int val;

}sparse;


void readSparse(sparse a[]){
    int n,m;
    printf("Enter the value of n m \n");
    scanf("%d %d",&n,&m);

    a[0].row = n;
    a[0].col = m;
    int  k =1;

    int matrix[n][m];
    printf("Enter the elements \n");
    for (int i =0; i<n; i++){
        for (int j =0; j<m; j++){
            int x;
            scanf("%d",&x);
            if (x==0) continue;
            a[k].row = i;
            a[k].col = j;
            a[k].val = x;
            k++;

        }
    }
    a[0].val = k-1;

    printf(" \n The entered sparse is : \n");
    for (int i=0; i<=a[0].val; i++){
        printf("%d %d %d",a[i].row,a[i].col,a[i].val);
        printf("\n");
    }
}

void fastTranspose(sparse a[],sparse b[]){

   
    int numTerms = a[0].val;
    int numCol = a[0].col;

    int startpos[1000],row_terms[10000];

    b[0].row = numCol;
    b[0].col = a[0].row;
    b[0].val = a[0].val;

    if (numTerms>0){

        for (int i=0; i<numCol;i++ ) row_terms[i]=0;
        for (int i =1; i<=numTerms; i++) row_terms[a[i].col]++;

        startpos[0] = 1;
        for (int i =1; i<numCol; i++) startpos[i] = startpos[i-1] + row_terms[i-1];

        for(int i =1; i<=numTerms; i++){
            int j = startpos[a[i].col]++;


        }

    }

    printf(" \n The fast transpose sparse is : \n");
    for (int i=0; i<=b[0].val; i++){
        printf("%d %d %d",b[i].row,b[i].col,b[i].val);
        printf("\n");
    }




}

int main(){

    sparse a[1000];
    sparse b[1000];

    readSparse(a);
    fastTranspose(a,b);

    return 0;
}