/*
    จงเขียนโปรแกรมทายตัวเลขซึ่งทำงานดังนี้
    - ตอนเริ่มเกมผู้เล่นจะมีคะแนนเต็ม 100
    - โปรแกรมจะสุ่มตัวเลขที่มีค่าตั้งแต่ 1 ถึง 100
    - ให้ผู้เล่นทายว่าตัวเลขที่โปรแกรมสุ่มมามีค่าเป็นเท่าใด
        - หากทายผิด โปรแกรมจะลบคะแนนของผู้เล่นไป 10 หน่วย พร้อมแจ้งคะแนนปัจจุบันให้ผู้เล่นทราบด้วย
        - หากทายผิด โปรแกรมจะต้องบอกใบ้ว่าคำตอบที่ถูกมีค่า "มากกว่า" หรือ "น้อยกว่า" ตัวเลขที่ผู้ใช้ทาย
        - หากทายผิด ให้โปรแกรมรอรับตัวเลขถัดไปได้เลย
        - หากทายถูก ให้โปรแกรมแสดงความยินดีกับผู้ใช้ พร้อมแจ้งคะแนนปัจจุบันให้กับผู้เช่น
        - เมื่อเล่นเสร็จโปรแกรมรอรับคำสั่งจากผู้ใช้ หากผู้ใช้กรอกเลข 1 จะเข้าสู่โหมดการเล่นเกมใหม่อีกครั้ง หากกด -1 ให้หยุดการทำงานของโปรแกรม

    หมายเหตุ : การสุ่มตัวเลขจะใช้คำสั่ง rand() ที่อยู่ใน stdlib.h หากต้องการสุ่มตัวเลข 0 ถึง 100 ต้องใช้คำสั่งดังนี้
        rand() % 100 + 1
    หมายเหตุ : หากต้องการสุ่มตัวเลขที่เปลี่ยนแปลงตามเวลา ต้องใช้คำสั่ง srand( time( NULL ) ) ในตอนต้นของโปรแกรมด้วย

    Test case & Output:
        Do you want to play game (1=play,-1=exit) :
            1
        (Score=100)
        Guess the winning number (1-100) :
            20
        Sorry, the winning number is HIGHER than 20. (Score=90)
        Guess the winning number (21-100) :
            50
        Sorry, the winning number is LOWER than 50. (Score=80)
        Guess the winning number (21-49) :
            42
        That is correct! The winning number is 42.
        Score this game: 80

        Do you want to play game (1=play,-1=exit) :
            1
        (Score=100)
        Guess the winning number (1-100) : 
            75
        Sorry, the winning number is LOWER than 75. (Score=90)
        Guess the winning number (1-74) : 
            20
        Sorry, the winning number is LOWER than 20. (Score=80)
        Guess the winning number (1-19) : 
            2
        Sorry, the winning number is HIGHER than 2. (Score=70)
        Guess the winning number (3-19) : 
            15
        That is correct! The winning number is 15.
        Score this game: 70

        Do you want to play game (1=play,-1=exit) :
            -1
*/

#include <stdio.h>
#include <cstdlib> //เรียก Libary ของ Random
#include <ctime> //เรียก Libary ของ time

int main() {
    srand( time(NULL) ) ;
    int num = 0 , re = 1 , score = 100 ;
    int front = 0 , back = 100 ;

    printf ( "คุณพี่อยากจะเล่นไหมคะ (1=play,-1=exit) :  " ) ;
    scanf( "%d" , &num ) ;

    while ( true ) { //ใช้กำหนดว่าจะเล่นอีกรอบ
        score = 100 , front = 0 , back = 100 ; // รีเซ็ตค่า
        int Random = rand() % 100 + 1 ;
        if ( num == 1 ) { //กำหนดเริ่มเกม
            while ( true ) {
                printf( "ลองเดาดูสิคะ : " ) ;
                scanf( "%d" , &num ) ;
                    if ( num < front || num > back ) { 
                        printf( "ตัวเลขที่กรอกอยู่นอกช่วง ( %d ถึง %d ) ค่ะ\n", front , back ) ;
                        score -= 10 ;
                        if (score < 0) score = 0 ;
                        printf( "คะแนนปัจจุบัน = %d\n" , score ) ;
                    } else if ( num < Random ) {
                        front = num + 1 ;
                        score -= 10 ;
                        if ( score < 0) score = 0 ;
                        printf( "ตัวเลขที่ถูกต้องมากกว่า %d ค่ะ\n", num ) ;
                        printf( "เลขที่ถูกต้องอยู่ระหว่าง %d ถึง %d ค่ะ ( Score = %d )\n" , front , back , score ) ;
                    } else if ( num > Random ) {
                        back = num - 1 ;
                        score -= 10;
                        if ( score < 0 ) score = 0 ;
                        printf( "ตัวเลขที่ถูกต้องน้อยกว่า %d ค่ะ\n", num );
                        printf( "เลขที่ถูกต้องอยู่ระหว่าง %d ถึง %d ค่ะ ( Score = %d )\n", front , back , score ) ;
                    } else if ( num == Random ) {
                        printf( "ยินดีด้วยนะคะเลขที่ถูกต้องคือ %d ( Score = %d )"  , Random , score) ;
                        break ;
                    }//end if
        }//end while 
        printf( "เล่นไหมใหม่คะ? (1=play,-1=exit) : " ) ;
        scanf( "%d" , &num ) ; 
        }else if ( num == -1 ) { //ใช้กำหนดว่าจะไม่เล่น
            exit (0) ;
        }//end if
    }//end while เริ่มใหม่
    return 0 ;
}//end main function
