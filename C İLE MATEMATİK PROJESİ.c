#include <stdio.h>
#include <stdlib.h>


int main ( ) {
	
	printf("**********************************");
	
	printf("\n");
	
	printf("***        MENU                 ***");
	
	printf("\n\n");
	
	printf("1.Toplama islemi\n");
	
	printf("2.Carpma islemi\n");
	
	printf("3.Karebul islemi\n");
	
	printf("4.Kupbul islemi\n");
	
	printf("5.Denklem(5x^2+4x+3)\n");
	
	int s1,s2,sonuc,secim;
	
	printf("\n\n\n\n");
	
	printf("isleminiz");
	
	scanf("%d",&secim);
	
	switch(secim)
	{
		case 1:
			
			printf("lutfen iki sayi giriniz:");
			
			scanf("%d %d",&s1,&s2);
			
			sonuc=s1+s2;
			
			printf("Toplam:%d",sonuc);
			
			break;
			
		case 2:
		     
			 printf("lutfen iki sayi giriniz:");
			 
			 scanf("%d %d",&s1,&s2);
			 
			 sonuc=s1*s2;
			 
			 printf("Carpim:%d",sonuc);
			 
			 break;
			 
		case 3:
		     
			 printf("lutfen kubu alinacak sayiyi giriniz:");
			 
			 scanf("%d",&s1);
			 
			 sonuc=s1*s1*s1;
			 
			 printf("kub sonucunuz:%d",sonuc);
			 
			 break;
			 
		case 4:
		      
		      printf("lutfen karesi alinacak sayiyi giriniz:");
		      
		      scanf("%d",&s1);
		      
		      sonuc=s1*s1;
		      
		      printf("sonuc:%d",&sonuc);
		      
		      break;
		      
		case 5:
		      
			  printf("x degerini giriniz:");
			  
			  scanf("%d",&s1);
			  
			  sonuc=5*s1*s1+4*s1+3;
			  
			  printf("Denklem sonucunuz:%d",sonuc);
			  
			  break;
			  
    }	

	return 0;
}
