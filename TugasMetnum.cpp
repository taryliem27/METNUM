/* Nama  : Mentari liem
	Nim : 3411151131
	Kelas : SIE-C
	TUGAS METODE NUMERIK
	*/
   
#include <stdio.h>
#include <conio.h>
#include <windows.h>
#include <math.h>

int penjumlahan (int x, int y){
	//kamus
	int hasil;
	
    //algoritma
    hasil = x + y;

    return (hasil);

}

int pengurangan (int x, int y){
	//kamus
	int hasil;
	
    //algoritma
    hasil = x - y;

    return (hasil);

}

int perkalian (int x, int y){
	//kamus
	int hasil;
	
    //algoritma
    hasil = x * y;

    return (hasil);

}

void menu(){
	//algoritma
	        printf("\nTampilan menu operasi : ");
		printf("\n-+-+-+-+-+-+-+-+-+\n"); s
			printf("1. Menghitung x+y\n");
			printf("2. Menghitung x-y\n");
			printf("3. Menghitung x*y\n");
			printf("4. Menghitung x^y\n");
			printf("5. Menghitung f(x)=2x^2-4x+1\n");
		
}

int pangkat (int x, int y){
	//kamus
	int hasil;
	//algoritma
	hasil=pow(x,y);
	printf("%d ^ %d= %d", x, y,hasil);
}


//main driver
int main () {
	//kamus data
	int a, b, i, hasil;
	int pilih;
	
	//algoritma
			menu:
			menu();
			printf("Pilih = ");
			scanf("%d", &pilih);
			system("cls");
			switch(pilih){
			case 1 :
				printf("PENJUMLAHAN");
	            			printf("\n-+-+-+-+-+-+-+-+-+\n"); 
				            printf("Masukan Bilangan Pertama : ");
                            scanf("%d",&a);
                            printf("Masukan Bilangan Kedua   : ");
                            scanf("%d",&b);
				        
						    hasil=penjumlahan (a,b);
                            printf("\n %d + %d = %d",a,b,hasil);
						
						    getch();
						    system("cls");
							goto menu;
			case 2 :			    
				printf("PENGURANGAN");
	                   		printf("\n-+-+-+-+-+-+-+-+-+\n"); 
				            printf("Masukan Bilangan Pertama : ");
                            scanf("%d",&a);
                            printf("Masukan Bilangan Kedua   : ");
                            scanf("%d",&b);
				        
						    hasil=pengurangan (a,b);
                            printf("\n %d - %d = %d",a,b,hasil);
						
						    getch();
						    system("cls");
						    goto menu;
			case 3 :	      	
			   	printf("PERKALIAN");
	                        printf("\n-+-+-+-+-+-+-+-+-+\n"); 
				            printf("Masukan Bilangan Pertama : ");
                            scanf("%d",&a);
                            printf("Masukan Bilangan Kedua   : ");
                            scanf("%d",&b);
				        
						    hasil=perkalian (a,b);
                            printf("\n %d * %d = %d",a,b,hasil);
						    
						    getch();
						    system("cls");
						    goto menu;  
			case 4 :	    
			    printf(" PERPANGKATAN");
	                       printf("\n-+-+-+-+-+-+-+-+-+\n"); 
				            printf("Masukan Bilangan : ");
                            scanf("%d",&a);
                            printf("Masukan Nilai Pangkat   : ");
                            scanf("%d",&b);
				            printf("\n");
						    hasil=pangkat (a,b);
						   
						    getch();
						    system("cls");
							goto menu;
						   
		  	  case 5 : 
				        printf("OPERASI HITUNG F(X)");
	                        printf("\n-+-+-+-+-+-+-+-+-+\n"); 
				            printf("Masukan Bilangan x : ");
                            scanf("%d",&a);
                            printf("Masukan Bilangan y : ");
                            scanf("%d",&b);
                            printf("\n---------------------------------------------\n");
                            printf("Syarat %d >= %d <= %d \n", a, a, b);
                            printf ("Berapa hasilnya jika f(x) = 2x^2 - 4x + 1 ? \n");
                            
							for (i=a;i<=b;i++){
						        printf ("\nJika x = %d \n", i);
	                            hasil=((2 * (pow(i,2)) - ( 3 * i) + 1));
	                            printf("\nf(%d)=2(%d)^2 - 4(%d) + 1= %d", i, i, i, hasil);
	                            printf("\n---------------------------------------------\n");
						    }
						    
							getch();
							return 0;
						
}
}

