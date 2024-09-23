/*
    จงเขียนโปรแกรมเพื่อรับคำจากผู้ใช้งาน เพื่อตรวจสอบว่า คำที่กรอกมามีลักษณะเป็นคำหรือวลีที่สามารถอ่านจากหลังไปหน้าหรือหน้าไปหลังแล้วยังคงความหมายเหมือนเดิมได้
    โดยที่ หากคำนั้นสามารถอ่านจากหน้าไปหลังหรือหลังไปได้ ให้แสดงผลลัพธ์ว่า Pass แต่หากทำไม่ได้ให้ขึ้นว่า Not Pass

    Test case:
        Enter word:
            radar
    Output:
        Pass.

    Test case:
        Enter word:
            hello
    Output:
        Not Pass.

    Test case:
        Enter word:
            Radar
    Output:
        Pass.

    Test case:
        Enter word:
            here
    Output:
        Not Pass.
*/

#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {

    char text[ 100 ] , revest[ 100 ] ;

    printf( "กรอกค่ามา" ) ;
    scanf( "%s" , text ) ;

    int length = strlen( text ) ; 

    for (int i = 0 ; i < length ; i++ ) {
        revest[ i ] = text[ length - 1 - i ] ; 
        text[ i ]   = tolower( text[ i ] ) ;
        revest[ i ] = tolower( revest[ i ] ) ;
    }//end for revest
    revest[ length ] = '\0' ;

    if (strcmp( text , revest ) == 0 ) {
        printf( "Pass" ) ;
    } else 
        printf( "Not Pass" ) ;
    return 0 ;
}//end main function
