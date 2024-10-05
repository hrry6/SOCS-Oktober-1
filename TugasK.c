#include <stdio.h>

int main(){
	int tc, N;
	
	scanf("%d", &tc);
	
	for(int i = 0; i < tc; i++) {
		scanf("%d", &N);
		printf("Case #%d:\n", i+1);
		for(int j = 0; j < N; j++) {
			
			for (int k = 0; k < N; k++){
				if(k < N - j - 1) {
					printf (" ");
				}   else if ((k + j) % 2 == 0){
					printf("*");
				}   else {
					printf("#");
				}
			}
			printf("\n");
		}
	}
	
	return 0;
}