#include <stdio.h>

const char* can_split_equal_sum(int arr[], int N) {
    long long total_sum = 0, left_sum = 0;
    

    for (int i = 0; i < N; i++) {
        total_sum += arr[i];
    }
    
    for (int i = 0; i < N - 1; i++) {
        left_sum += arr[i];  
        if (left_sum == total_sum - left_sum) {
            return "Yes"; 
        }
    }
    
    return "No";
}

int main() {
    int T;
    scanf("%d", &T);  
    
    for (int t = 1; t <= T; t++) {
        int N;
        scanf("%d", &N);  
        
        int arr[N];
        for (int i = 0; i < N; i++) {
            scanf("%d", &arr[i]);  
        }
        

        printf("Case #%d: %s\n", t, can_split_equal_sum(arr, N));
    }
    
    return 0;
}