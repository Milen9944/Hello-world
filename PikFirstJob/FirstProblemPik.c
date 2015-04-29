#include<stdio.h>
#include<stdlib.h>

int main(){
	double salary[10];
	char name[30];
	char section[50];



	FILE *fp;
	fp = fopen("C:\\Users\Milen\Desktop\PikProblem.txt", "r");

	if (fp == NULL) {
	
		printf("Eror opening this file!\n");
		exit(1);
	}


}
