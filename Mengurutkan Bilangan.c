#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>

int main() {
   int n;
    
    int temp = 0;
    scanf("%d", &n);
    int nilai[n];
    for(int i = 0; i < n; i++){
        scanf("%d", &nilai[i]);
    }
    for(int i = 0; i < n-1; i++){
        for(int j = 0; j<n-i-1; j++){
            if(nilai[j+1] > nilai [j]){
                temp = nilai[j+1];
                nilai[j+1] = nilai[j];
                nilai[j] = temp;
            }
        }
    }
    for(int i = n - 1; i >= 0; i--){
        printf("%d\n", nilai[i]);
    }
    return 0;
}
