#include <iostream>



int main() {

int i,j,sayi,k=1;
printf("bir sayi giriniz:\n");
scanf("%d",&sayi);
for(i=1;i<=sayi;i++)
{
	for(j=1;j<=i;j++)
	{
		printf("%d",k);
		k++;
	}
	k=1;
	printf("\n");
}




	return 0;
}
/*
int main(){

int i,j,k=0,sayi;

printf("bir sayi giriniz:\n");
scanf("%d",&sayi);
for(i=1;i<=sayi;i++)
{
	for(j=1;j<=i;j++)
	{
		k++;
		printf(" %d ",k);
		
	}

	printf("\n");
}
	
return 0;
}



int main(){
	
int i,j,k,l,sayi,bosluk;
k=1;

printf("bir sayi giriniz:\n");
scanf("%d",&sayi);
for(i=1;i<=sayi;i++)
{
	for(l=sayi-i;l>0;l--)
	{
		printf(" ");
	}
	for(j=1;j<=i;j++)
	{
	printf(" %d ",k);
			k++;
	}
	
	printf("\n");
}
	
	
	
	
	
	
	
	
	
	return 0;
}



int main(){
	
	int sayi,i,j,l;
	printf("bir sayi giriniz:\n");
	scanf("%d",&sayi);
	for(i=1;i<=sayi;i++)
	{
		for(j=sayi-i;j>0;j--)
		{
			printf(" ");
		}
		for(l=1;l<=i;l++)
		{
			printf(" * ");
		}
		printf("\n");
	}	
	
	return 0;
}


int main(){
	
int sayi,i,sonuc;
printf("bir sayi giriniz:\n");
scanf("%d",&sayi);
for(i=1;i<=sayi;i++)
{
		sonuc=sonuc*i;
}
printf("sonuc:%d",sonuc);	
	return 0;
}


int main(){
	
	int sayi,toplam,i;
	printf("bir sayi giriniz:\n");
	scanf("%d",&sayi);
	for(i=2;i<=sayi;i+=2)
	{
		toplam=toplam+i;
	}
	printf("toplam:%d",toplam);
	
	return 0;
}


int main(){

	
	
	
	
	
	
	
	return 0;
}

*/







