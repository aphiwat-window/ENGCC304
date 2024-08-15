#include <stdio.h>

int main() {
    for ( int s = 0; s < 10; s==0) {
        int number = 0 ;
        printf( "กรอกจำนวนเลข : " ) ;
        scanf("%d",&number);

        if ( number % 2 == 0 ) {

            int sum = 1 ;
            int b = 1 ;
            for ( int i = 0 ; i < 6 ; i++ ) {
                if ( i < 5 ) {
                    b *= 10 ;
                    printf( "%d\n",sum += 100000 ) ;
                    sum = b ;
                }else {
                    printf( "%d\n" , sum ) ;
                }
            }
            
        }else if ( number % 2 == 1 ) {
                int sum = 1 ;
                int b = 100000;
                for (int i = 0 ; i < 6 ; i++) {
                        sum = b ;
                        printf( "%06d\n",sum ) ;
                        b /= 10 ;
                }   
            }
    }

    return 0;
}
