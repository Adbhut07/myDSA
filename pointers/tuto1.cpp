#include<iostream>
using namespace std;

// 1. Prime numbers
/*vector<int> sieveOfEratosthenes(int N)
    {
        vector<bool> prime(N+1,true);
        prime[0]=prime[1]=false;
        for(int i=2;i*i<=N;i++){
            if(prime[i]==true){
                for(int j=i*i; j<=N; j+=i){
                    prime[j]=false;
                }
            }
        }
         vector<int> primes;
        for (int p = 2; p <= N; p++) {
            if (prime[p]) {
                primes.push_back(p);
            }
        }
        return primes;

    }
*/


#include <stdio.h>
#include <string.h>

void addLargeNumbers(const char* num1, const char* num2, char* result) {
    int len1 = strlen(num1);
    int len2 = strlen(num2);
    int carry = 0;
    int idx = 0;

    for (int i = len1 - 1, j = len2 - 1; i >= 0 || j >= 0 || carry > 0; i--, j--) {
        int digit1 = (i >= 0) ? num1[i] - '0' : 0;
        int digit2 = (j >= 0) ? num2[j] - '0' : 0;
        
        int sum = digit1 + digit2 + carry;
        carry = sum / 10;
        result[idx++] = sum % 10 + '0';
    }
    
    result[idx] = '\0';

    // Reverse the result
    int length = strlen(result);
    for (int i = 0; i < length / 2; i++) {
        char temp = result[i];
        result[i] = result[length - i - 1];
        result[length - i - 1] = temp;
    }
}

int main() {
    const char* num1 = "1234567890123456789012345678901234567890";
    const char* num2 = "9876543210987654321098765432109876543210";
    
    char sum[1000];  // Adjust the size based on your requirements
    addLargeNumbers(num1, num2, sum);
    
    printf("Sum: %s\n", sum);
    
    return 0;
}
