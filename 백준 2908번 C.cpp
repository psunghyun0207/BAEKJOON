#include <stdio.h>
#include <stdlib.h>
#define _CRT_SECURE_NO_WARNING



int main() {
    
    int third, second, first;
    int scA, scB;
    int reA, reB;
    
    scanf("%d %d", &scA, &scB);
    
    for(int i = 0; i < 30; i++) {
    	
    	if(scA >= 100) {
    		
    		scA -= 100;
    		third++;
		}
		else if(scA < 100 && scA >= 10) {
			
			scA -= 10;
			second++;
		}
		else if(scA >= 0 && scA < 10) {
			
			scA--;
			first++;
		}
	}
	for(int i = 0; i < 30; i++) {
		
		if(third > 0) {
			
			third--;
			reA++;
		}
		
		else if(second > 0) {
			
			second--;
			reA += 10;
		}
		else if (first > 0) {
			
			first--;
			reA += 100;
		}
		else {
			
			continue;
		}
	}
	
	first = 0;
	second = 0;
	third = 0;
	
	for(int i = 0; i < 30; i++) {
    	
    	if(scB >= 100) {
    		
    		scB -= 100;
    		third++;
		}
		else if(scB < 100 && scB >= 10) {
			
			scB -= 10;
			second++;
		}
		else if(scB >= 0 && scB < 10) {
			
			scB--;
			first++;
		}
	}
	for(int i = 0; i < 30; i++) {
		
		if(third > 0) {
			
			third--;
			reB++;
		}
		
		else if(second > 0) {
			
			second--;
			reB += 10;
		}
		
		else if (first > 0) {
			
			first--;
			reB += 100;
		}
		
		else {
			
			continue;
		}
	}
	
	if(reA > reB) {
		
		printf("%d", reA);
	}
	else {
		
		printf("%d", reB);
	}
}
