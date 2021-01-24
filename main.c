//
// Author: Matt Kreul
// Created: 01/24/2021
//


#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <ctype.h>

/**
 * A little program I wrote for my girlfriend.  Also using to test waiting functions and parsing information that could
 * be correct in a multitude of formats.
 * @return
 */
int strcmpi(char const *, char const *);
int main() {
	char buf[100];
	char * user;
	printf("Hello! Welcome to my program!\n");
	sleep(1);
	printf("Who am I talking to? ");
	scanf(" %s", buf);
	user = (char *) malloc(sizeof(char) * strlen(buf));
	for(int i = 0; i < strlen(buf); i++){
		if(buf[i] > '`' && buf[i] < '{'){
			user[i] = buf[i] - 32;
		}
		else if ((buf[i] > '@' && buf[i] < '[') || buf[i] == ' '){
			user[i] = buf[i];
		}
		else{
			fprintf(stderr, "Invalid char input :(\n\n");
			return -1;
		}
	}
	if(strcmp(user, "RACHEL") == 0 || strcmp(user, "RACHEL LINN WARNER") == 0 || strcmp(user, "RACHEL WARNER") == 0){
		printf("ooooo I LOVE YOU!!!!!! <3 <3 <3\n");
	}
	else{
		printf("**Picture tiktok anime movements**\n");
		printf("Sorry haha... \n");
		sleep(3);
		printf("I don't know who you are... \n");
		sleep(3);
		printf("I just... \n");
		sleep(3);
		printf("Really love Rachel... *shrugs awkwardly* \n");
//		printf()
	}
	return 0;
}

