//  Patern printing
//LECTURE - 4 
#include<iostream>
using namespace std;
int main(){
    /* *
       **
       ***
       ****
    */

/*  int n;
    cin>>n;
    int row=1;
    while(row<=n){
        int col=1;
        while(col<=row){
            cout<<"*";
            col=col+1;
        }
        cout<<endl;
        row=row+1;
    }
*/
    /* 1
       22
       333
       4444 */
    
/*  int n;
    cin>>n;
    int row=1;
    while(row<=n){
        int col=1;
        while(col<=row){
            cout<<row;
            col=col+1;
        }
        cout<<endl;
        row=row+1;
    }   
*/
    
    /* 1
       23
       456
       78910 */

/*    int n;
    cout<<"enter the no. of rows"<<endl;
    cin>>n;
    int i=1;
    int count=1;
    while(i<=n){
        int j=1;
        while(j<=i){
            cout<<count<<" ";
            count=count+1;
            j++;
        }
        cout<<endl;
        i++;
    }
*/
    /* 1
       23
       345
       4567 */
    
 /*  int n;
    cout<<"enter the no. of rows"<<endl;
    cin>>n;
    int row=1;
    while(row<=n){
        int col=1, value=row;
        while(col<=row){
            cout<<value<<" ";
            value=value+1;
            col=col+1;
        }
        cout<<endl;
        row=row+1;
    }
*/ 
    
    // another approach for above pattern

/*  int rows;
    cout << "Enter the number of rows: ";
    cin >> rows;

    int i = 1;
    int count = 1;

    while (i <= rows) {
        int j = 1;
        while (j <= i) {
            cout << count + j - 1;
            j++;
        }
        cout <<endl;
        count = count+1;
        i++;
    }
*/ 

    /* 1
       2 1
       3 2 1
       4 3 2 1 */
    
/*   int n;
    cin>>n;
    int row=1;
    while(row<=n){
        int col=1;
        while(col<=row){
            cout<<(row-col+1)<<" ";
            col=col+1;
        }
        cout<<endl;
        row=row+1;
    }
*/

    /* AAA
       BBB
       CCC */

/*   int n;
    cin>>n;
    int i=1;
    while(i<=n){
        int j=1;
        while(j<=n){
            char ch='A'+i- 1;               //formula used='A'+i-1
            cout<<ch;
            j++;
        }
        cout<<endl;
        i++;
    }
*/
    /* A B C
       A B C
       A B C */

/*   int n;
    cin>>n;
    int i=1;
    while(i<=n){
        int j=1;
        while(j<=n){
            char ch='A'+j-1;                   //formula used= 'A'+j-1
            cout<<ch;
            j++;
        }
        cout<<endl;
        i++;
    }
 */

    /* A B C
       D E F
       G H I */
    
/*  int n;
    cin>>n;
    int i=1;
    char ch='A';
    while(i<=n){
        int j=1;
        while(j<=n){
            cout<<ch;
            ch=ch+1;
            j++;
        }
        cout<<endl;
        i++;
    }
*/
    /*  A
        BB
        CCC */

/*    int n;
    cin>>n;
    int i=1;
    //char ch='A';
    while(i<=n){
        int j=1;
        while(j<=i){
            cout<< char ('A'+i-1);             //we can use this formula or we can declare a variable ch
            j++;
        }
        //ch=ch+1;
        cout<<endl;
        i++;
    }
*/
    /*  A
        BC
        CDE 
        DEFG */
    
/*  int n;
    cin>>n;
    int i=1;
    while(i<=n){
        int j=1;
        while(j<=i){
            cout<< char ('A'+i+j-2);
            j++;
        }
        cout<<endl;
        i++;
    }
*/  

    /* D
       CD
       BCD
       ABCD */

/*  int n;
    cin>>n;
    int i=1;
    while(i<=n){
        int j=1;
        char start='A'+n-i;
        while(j<=i){
            cout<<start;
            start=start+1;
            j++;
        }
        cout<<endl;
        i++;
    }
*/
    /*     *
          **
         ***
        ****  */
/* int n;
    cin>>n;
    int i=1;
    while(i<=n){
        int space=n-i;
        while(space){
            cout<<" ";
            space=space-1;
        }
        int j=1;
        while(j<=i){
            cout<<"*";
            j++;
        }
        cout<<endl;
        i++;
    }
*/ 

    /* ****
       ***
       **
       *   */

/*  int n;
    cin>>n;
    int i=1;
    while(i<=n){
        int j=1;
        int star=n-i+1;
        while(j<=star){
            cout<<'*';
            j++;
        }
        cout<<endl;
        i++;
            
           
    }
*/  
    /* ****
        ***
         **
          *  */
    int n;
    cin>>n;
    int i=1;
    while(i<=n){
        int j=1;
        int star=n-i+1;
        int space=i-1;
        while(space){
            cout<<" ";
            space=space-1;
        }
        while(j<=star){
            cout<<"*";
            j++;
        }
        cout<<endl;
        i++;
    }




    return 0;
}