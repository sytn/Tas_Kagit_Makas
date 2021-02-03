#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void){
	int oyuncu, bilgisayar;
	printf("Tas ==> 1\nKagit ==> 2\nMakas ==> 3");
	printf("\nBir secim yap ==> ");
	scanf("%d", &oyuncu);
	
	srand(time(NULL));
	int i = (rand() % 3) + 1; 
	
	
	if(oyuncu == 1 && i == 2){
		printf("Kaybettin. Bilgisayar Kagýt secti.");
	}else if(oyuncu == 1 && i == 3){
		printf("Kazandin. Bilgisayar Makas secti.");
	}else if(oyuncu == 1 && i == 1){
		printf("Berabere. Bilgisayar Tas secti.");
	}else if(oyuncu == 2 && i == 1){
		printf("Kazandin. Bilgisayar Tas secti.");
	}else if(oyuncu == 2 && i == 3){
		printf("Kaybettin. Bilgisayar Makas secti.");
	}else if(oyuncu == 2 && i == 1){
		printf("Berabere. Bilgisayar Kagit secti.");
	}else if(oyuncu == 3 && i == 1){
		printf("Kazandin. Bilgisayar Tas secti.");
	}else if(oyuncu == 3 && i == 2){
		printf("Kaybettin. Bilgisayar Makas secti.");
	}else if(oyuncu == 3 && i == 3){
		printf("Berabere. Bilgisayar Kagit secti.");
	}
	
	
	return 0;
}







