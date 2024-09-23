/*
    จงเขียนฟังก์ชันในการตรวจสอบตัวเลขที่ผู้ใช้ป้อนเข้ามา ว่าเป็นตัวเลขที่เป็นอาร์มสตรองหรือไม่ หากใช่ให้แสดงคำว่า Pass หากไม่ใช่แสดงคำว่า Not Pass
    
    หมายเหตุ: ตัวเลขอาร์มสตรอง คือ ตัวเลขที่ผลรวมของเลขยกกำลังของจำนวนหลัก เช่น
    153 เป็นตัวเลขอาร์มสตรอง เพราะ 153 มีทั้งหมด 3 หลัก จึงมีค่าเท่ากับ = 1^3 +  5^3 +  3^3 (โดยที่เครื่องหมาย ^ หมายถึงเลขยกกำลัง)
    370 = 3^3 + 7^3 + 0^3

    Test Case:
        Enter Number:
            153
    Output:
        Pass.
    
    Test Case:
        Enter Number:
            370
    Output:
        Pass.
    
    Test Case:
        Enter Number:
            372
    Output:
        Not Pass.
*/

#include <stdio.h>


int main() {
    int data = 0 , count = 0 , cal2 = 1 , cal1 = 0 ;
    int total = 0 , next = 0 , Sum[100] ;

    printf( "กรอกค่ามา" ) ;
    scanf( "%d", &data ) ;
    
    int digit = data ;
    while (digit != 0) {
        digit /= 10 ;
        count++ ;
    }

    digit = data ;
    for (int j = 0; j < count; j++) {
        cal1 = digit % 10 ;
        cal2 = 1 ;
        for (int i = 0 ; i < count; i++) {
            cal2 =  cal2 * cal1 ;
        }
        Sum[next] = cal2 ;
        next++ ;
        digit /= 10 ;
    }
    for ( int i = 0 ; i < next ; i++ ) {
        printf( "หลักที่ %d คือ %d\n" , i + 1 , Sum[i] ) ;
        total += Sum[i] ;
    }
    printf( "ผลรวมคือ %d\n" , total ) ;
    if  (total == data ) {
        printf( "Pass." ) ;
    } else {
        printf( "Not Pass." ) ;
    }
    
    return 0 ;
}//end main function
