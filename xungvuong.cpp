#include<stdio.h>
float chuki(float Ton, float Toff){
      float T=Ton+Toff;		
return T;
}
int main(){
	float Ton,Toff;
	printf("nhap chi so cua Ton,Toff:");
	scanf("%f %f",&Ton,&Toff);
	printf("Chu ki T=%f",chuki(Ton,Toff));
	printf("\nTan so f=%f",1/chuki(Ton,Toff));
	printf("\nDuty Cycle D=%f",(Ton/chuki(Ton,Toff))*100);
return 0;
}	