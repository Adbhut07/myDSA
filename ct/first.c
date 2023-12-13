#include <stdio.h>
#include <string.h>
const int MAX = 200;
int main()
{
    char num1[MAX];
    char num2[MAX];
    printf("Enter the num1 \n");
    scanf("%s", &num1);
    printf("Enter the num2 \n");
    scanf("%s", &num2);
    int n1 = strlen(num1);
    int n2 = strlen(num2);
    int i = n1 - 1;
    int j = n2 - 1;
    int carry = 0;
    char ans[MAX];
    int k = 0;
    while (i >= 0 || j >= 0)
    {
        int x, y;
        x = i >= 0 ? num1[i] - '0' : 0;
        y = j >= 0 ? num2[j] - '0' : 0;

        int sum = x + y + carry;
        ans[k] = sum % 10 + '0';
        carry = sum / 10;
        k++;
        i--;
        j--;
    }

    for (int c = k - 1; c >= 0; c--)
    {
        printf("%c ", ans[c]);
    }
    return 0;
}