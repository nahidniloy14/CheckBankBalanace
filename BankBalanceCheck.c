#include <stdio.h>
int spend(float * balance, float each) {
        int units;
        units = *balance / each;
        *balance = *balance - units * each;
        return units;
        }

main () {

        float bank = 150.00;
        int month, week, day;

        month = spend(&bank,22.00);
        week = spend(&bank,10.00);
        day = spend(&bank,3.50);

        printf("months %d, weeks %d, days %d\n",
                month, week, day);

        printf("And you've still got %.2f\n",bank);

        }

#include <stdio.h>
int mul(int *p,int q){

int v=*p*q;
return v;

}


int main (){
int x=100,y;
printf("Enter a number to multiply with 100 \n");
scanf("%d",&y);
int g=mul(&x,y);
printf("Your result is =%d\t",g);


}

#include <stdio.h>
#include <conio.h>

void Array(int *m[2][2]){
    int k,a;
for(k=0;k<2;k++){
        for(a=0;a<2;a++){
  printf("%d\t",m[k][a]);

        }
        printf("\n");
}


}


void main (){

int p[2][2],*j,i,l;
for(i=0;i<2;i++){
for(l=0;l<2;l++)
    scanf("%d",&p[i][l]);
}
j=&p;
Array(j);

}

#include <stdio.h>

void Array(int *m){
    int k;
for(k=0;k<2;k++){
  printf("%d\t",m[k]);


}


}


void main (){

int p[2],*j,i;
for(i=0;i<2;i++){

    scanf("%d",&p[i]);
}
j=&p;
Array(j);

}
#include <stdio.h>

void Array(int *m){


  printf("%s",m);





}


void main (){

char p[]="Hello";
int *j,i;

j=&p;
Array(j);

}
