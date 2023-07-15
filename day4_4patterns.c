#include<stdio.h>
#include<stdlib.h>
int main(){
    int i,j;
for(i=1; i<=5; i++){
    for(j=0; j<i; j++){
        printf("* ");
    }
    printf("\n");
}

printf("\n");

for(i=5; i>=1; i--){
    for(j=0; j<i; j++){
        printf("* ");
    }
    printf("\n");
}

printf("\n");

for(i=1; i<=5; i++){
    for(j=0; j<i; j++){
        printf(" ");
    }
    printf("* ");
    printf("\n");
}

for(i=5; i>=1; i--){
    for(j=0; j<i; j++){
        printf(" ");
    }
    printf("* ");
    printf("\n");
}

for(i=1; i<=5; i++){
    for(j=0; j<i; j++){
        printf(" ");
    }
    printf("* ");
    printf("\n");
}
printf("\n");


return 0;
}