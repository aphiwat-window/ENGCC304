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

int readData() {
    int data;
    printf( "กรอกค่ามา: " ) ;
    scanf( "%d" , &data ) ;
    return data ;
}//end funtion readData

int countDigits( int data ) {
    int count = 0 ;
    while ( data != 0 ) {
        data /= 10 ;
        count++ ;
    }
    return count;
}//end funtion countDigits

int calculate( int data , int count , int Sum[] ) {
    int digit = data ;
    int total = 0 ;
    int next = 0 ;

    for ( int j = 0 ; j < count ; j++ ) {
        int cal1 = digit % 10 ;
        int cal2 = 1 ;

        for ( int i = 0 ; i < count ; i++ ) {
            cal2 *= cal1 ;
        }//end for ยกกำลัง

        Sum[next] = cal2 ;
        total += cal2 ;
        next++ ;
        digit /= 10 ;
    }//end for คำนวน
    return total ;
}//end funtion calculateSum

int main() {
    int data = readData() ;
    int count = countDigits(data) ;
    int Sum[100] = {0} ;
    int total = calculate( data , count , Sum ) ;

    // แสดงผลลัพธ์ภายใน main
    for ( int i = 0 ; i < count ; i++ ) {
        printf( "หลักที่ %d คือ %d\n" , i + 1 , Sum[i] ) ;
    }//end for แสดงหลัก และ เลข

    printf( "ผลรวมคือ %d\n" , total ) ;
    if ( total == data ) {
        printf( "Pass.\n" ) ;
    } else {
        printf( "Not Pass.\n" ) ;
    }//end if เปรียบเทียบค่า
    return 0 ;
}//end funtion main
