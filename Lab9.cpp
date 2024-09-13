/*
    จงเขียนโปรแกรมรับค่าจากผู้ใช้เข้าไปใส่ในอาเรย์และแสดงผลลัพธ์ออกมาทั้งหมดที่เป็นจำนวนเฉพาะเท่านั้น (ค่าที่ไม่ใช่จำนวนเฉพาะแสดงเครื่องหมาย # แทน)

    Test case:
        Enter N :
            6
        Enter value[0] :
            19
        Enter value[1] :
            18
        Enter value[2] :
            27
        Enter value[3] :
            15
        Enter value[4] :
            4
        Enter value[5] :
            2
    Output:
        Index:  0  1  2  3  4  5
        Array:  # 19  #  #  #  2
*/

#include <stdio.h>

int main() {
    int ArMax = 0 ;
    printf("Enter Maximum of array: ") ;
    scanf( "%d" , &ArMax ) ;

    int Array[ArMax] ;

    for ( int i = 0 ; i < ArMax ; i++ ) {
        printf( "Enter Data [%d] " , i ) ;
        scanf( "%d" , &Array[i] ) ;
    }//end for รับค่า

    printf( "Index" ) ;
    
    for ( int i = 0 ; i < ArMax ; i++ ) {
        printf( "  %d" , i ) ;
    }//end for แสดงค่า Index
    printf( "\nArray" ) ;

    for ( int i = 0 ; i < ArMax ; i++ ) {
        int prime = 1 ;
        if( Array[i] == 0 || Array[i] == 1 ) {
            prime = 0 ;
        } else {
            for( int j=2; j <= Array[i]/2 ; j++ ) {
                if( Array[i] % j == 0 ) {
                    prime = 0 ;
                    break ;
                }//end if ตรวจสอบเลขที่ไม่ใช่จำนวนเฉพาะ
            }//end for ตัดจำนวนลงตรึ่งนึง
        }
        
        if ( prime == 0 ) {
            printf( "  #" ) ;
        } else {
            printf( "  %d" , Array[i]) ;
        }//end if เช็คเลข
        
    }//end for เพิ่มจำนวน Arrey
    
    return 0;
}//end funtion
