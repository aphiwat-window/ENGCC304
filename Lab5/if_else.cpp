/*
    ผู้ใช้กรอกค่า "คะแนนดิบ" เข้ามาในระบบเพื่อต้องการตรวจสอบเกรดในรายวิชา Programming ซึ่งมีเกณฑ์การให้คะแนนคือ F อยู่ในช่วงคะแนนน้อยกว่า 50 , D อยู่ในช่วงระหว่าง 50 ถึง 55 , D+ อยู่ในช่วงระหว่าง 55 ถึง 60 , C อยู่ในช่วงระหว่าง 60 ถึง 65 , C+ อยู่ในช่วงระหว่าง 65 ถึง 70 , B อยู่ในช่วงระหว่าง 70 ถึง 75 , B+ อยู่ในช่วงระหว่าง 75 ถึง 80 , A อยู่ในช่วงคะแนนมากกว่า 80 ขึ้นไป
    (กำหนดให้ข้อนี้ใช้คำสั่ง if else ได้เท่านั้น)
    
    Test case:
        enter score :
            80
    Output:
        A !

    Test case:
        enter score :
            55
    Output:
        D+ !

    Test case:
        enter score :
            64
    Output:
        C !

    Test case:
        enter score :
            44
    Output:
        F !

    Test case:
        enter score :
            hello
    Output:
        please enter number only.
*/

#include <stdio.h>

int main() {
    int data = 0 ;

    printf( "กรอกคะแนนของท่าน: " ) ;
    if ( scanf( "%d" , &data ) != 1 ) {
        printf( "please enter number only" ) ;
    } else {

        if ( data >= 80 ) {
            printf( "A" ) ;
        } else if ( data >= 75 && data < 80 ) {
            printf( "B+" ) ;
        } else if ( data >= 70 && data < 75 ) {
            printf( "B" ) ;
        } else if ( data >= 65 && data < 70 ) {
            printf( "C+" ) ;
        } else if ( data >= 60 && data < 65 ) {
            printf( "C" ) ;
        } else if ( data >= 55 && data < 60 ) {
            printf( "D+" ) ;
        } else if ( data >= 50 && data < 55 ) {
            printf( "D" ) ;
        } else {
            printf ( "F" ) ;
        }//end if
            
    }//end if
return 0;
}//end funtion
