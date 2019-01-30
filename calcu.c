#include <stdio.h>
#include <stdbool.h>


bool checkLeapYear(int year){
	if((year%4 == 0 && year%100 !=0) || year%400 == 0){
		return true ;
	}else {
		return false ;
	}
}

int dayOfWeek(int k ,int m , int y){

	m = m - 2 ;
	if(m == 0){
		m = 12 ;
		y = y - 1 ;
	}
	if(m == -1){
		m = 11 ;
		y = y - 1 ;
	}
	int d = y % 100 ;
	int c = y / 100 ;

	//printf("%d %d %d %d \n", k,m,d,c);

	int f = k + ((13*m - 1)/5) + d + (d/4) + (c/4) - 2*c ;

	//printf("f is %d\n", f );
    int dow ;
    if(f<0){
    	dow = (f%7) + 7 ;
    }else {
    	dow = f % 7 ;
    }
    //printf("dow is %d\n", dow );

	return dow;
}

int main(){

	int d , m , y ;
	scanf("%d %d %d" , &d , &m , &y);


	if(checkLeapYear(y)){
		printf("Year is a leap year\n");
	}else {
		printf("Year is not a leap year\n");
	}



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
	int dow = dayOfWeek(1,m,y) + 1 ;
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
