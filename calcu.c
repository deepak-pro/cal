#include <stdio.h>


int main(){
	
	int d , m , y ;
	scanf("%d %d %d" , &d , &m , &y);
	int nod ;
	switch(m){
		case 1 : printf("    January %d\n" , y);
				 nod = 31 ;
				 break ;
		case 2 : printf("    Febuary %d\n" , y);
				 nod = 28 ;
				 break ;
		case 3 : printf("    March %d\n" , y);
				 nod = 31 ;
				 break ;
		case 4 : printf("    April %d\n" , y);
				 nod = 30 ;
				 break ;
		case 5 : printf("    May %d\n" , y);
				 nod = 31 ;
				 break ;
		case 6 : printf("    June %d\n" , y);
				 nod = 30 ;
				 break ;
		case 7 : printf("    July %d\n" , y);
				 nod = 31 ;
				 break ;
		case 8 : printf("    August %d\n" , y);
				 nod = 31 ;
				 break ;
		case 9 : printf("    September %d\n" , y);
				 nod = 30 ;
				 break ;
		case 10 : printf("    October %d\n" , y);
				 nod = 31 ;
				 break ;
		case 11 : printf("    November %d\n" , y);
				 nod = 30 ;
				 break ;
		case 12 : printf("    December %d\n" , y);
				 nod = 31 ;
				 break ;
		default : printf("Invalid Date\n");
				  return 0;
	}

	printf("Su Mo Tu We Th Fr Sa\n") ;

	int counter = 1 ;
	int dow = 3 ;
	while(counter<=nod){
		if(dow == 8){
			printf("\n");
			dow = 1 ;
		}
		++dow ;
		if(dow>1 && counter==1){
			int space = dow - 1 ;
			while(space--){
				printf("  ");
			}
		}
		if(counter/10 == 0){
			printf(" ");
		}
		printf("%d" , counter);
		printf(" ");
		++counter ;
	}

	printf("\n");


	return 0;
}
