#include <stdio.h>
int main() {
        if ( int number = 0 ; printf( "กรอกจำนวนเลข : " ) , scanf( "%d" , &number ) , number % 2 == 0 ) {
        for ( int i = 1 ; i <= number ; i++ ) {
            for ( int k = 1 ; k <= number ; k++ ) {
                if (k == number - i + 1) {
                    printf( "1" ) ; } 
                else {
                    printf( "0" ) ; }//end if
                }//end for
            printf( "\n" ) ; }//end for
        } else {
            for ( int i = 1; i <= number; i++ ) {
                for ( int k = 1 ; k <= number ; k++ ) {
                    if ( k == i ) {
                        printf( "1" ) ;} 
                    else {
                        printf( "0" ) ;}
                    }
                printf( "\n" ) ;    
            } //else
        } //end for
    return 0;
} //end funtion
