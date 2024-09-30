/*
    จงเขียนฟังก์ชันการตัดเกรดในแต่ละรายวิชาของนักเรียนจำนวน 3 คน โดยนักเรียนแต่ละคนจะมีข้อมูลดังต่อไปนี้
    ชื่อ, นักศักศึกษา, คะแนนในวิชาที่ 1, คะแนนในวิชาที่ 2, คะแนนในวิชาที่ 3, คะแนนในวิชาที่ 4, คะแนนในวิชาที่ 5
    แสดงได้ดังโครงสร้างข้อมูลต่อไปนี้

    struct Student {
        char Name[20] ;
        char ID[5] ;
        float ScoreSub1 ;
        float ScoreSub2 ;
        float ScoreSub3 ;
        float ScoreSub4 ;
        float ScoreSub5 ;
    } typedef S ;

    Test Case:
        Enter the details of 3 students :
        Student 1:
        Name: 
            John Doe
        ID: 
            101
        Scores in Subject 1: 
            77
        Scores in Subject 2: 
            64
        Scores in Subject 3: 
            66
        Scores in Subject 4: 
            54
        Scores in Subject 5: 
            56

        Student 2:
        Name: 
            Jane Smith
        ID: 
            102
        Scores in Subject 1: 
            43
        Scores in Subject 2: 
            70
        Scores in Subject 3: 
            76
        Scores in Subject 4: 
            77
        Scores in Subject 5: 
            80

        Student 3:
        Name: 
            Mark Johnson
        ID: 
            103
        Scores in Subject 1: 
            77
        Scores in Subject 2: 
            74
        Scores in Subject 3: 
            76
        Scores in Subject 4: 
            81
        Scores in Subject 5: 
            69

    Output:
    Student Details:
    Student 1:
    Name: John Doe
    ID: 101
    Scores: 77 64 66 54 56
    Grades: B+  C C+ D  D+
    Average Scores: 63.4

    Student 2:
    Name: Jane Smith
    ID: 102
    Scores: 43 70 76 77 80
    Grades:  F  B B+ B+  A
    Average Scores: 69.2

    Student 3:
    Name: Mark Johnson
    ID: 103
    Scores: 77 74 76 81 69
    Grades: B+  B B+  A C+
    Average Scores: 75.4
*/

#include <stdio.h>
#include <string.h>

struct Student {
    char Name[ 20 ] ;
    char ID[ 5 ] ;
    float ScoreSub[ 5 ] ;
} typedef S ;

S STD[ 3 ] ;

void data() ;
void Grade() ;

int main() {
    data() ;
    Grade() ;
    return 0 ;
}//end main function

void data() {
    for ( int i = 0 ; i < 3 ; i++ ) {
        printf( "Student %d \n" , i + 1 ) ;
        printf( "กรอกชื่อมาไอ้โง่ : " ) ;

        fgets( STD[i].Name , 20 , stdin ) ;
        STD[i].Name[ strcspn( STD[i].Name , "\n") ] = 0 ;
        
        printf( "กรอก ID มาไอ้โง่ : " ) ;
        scanf( "%s" , STD[i].ID ) ;

        for ( int j = 0 ; j < 5 ; j++ ) {
            printf( "กรอก Subject %d มาไอ้โง่ : " , j + 1 ) ;
            scanf( "%f" , &STD[i].ScoreSub[j] ) ;
        }//end for กรอกคะแนน
        getchar() ;

        printf( "\n\n" ) ;
    }//end funtion data
}

void Grade() {
    for ( int i = 0 ; i < 3 ; i++ ) {
        printf( "Student %d\n" , i + 1 ) ;
        printf( "Name : %s\n" , STD[i].Name ) ;
        printf( "ID : %s\n" , STD[i].ID ) ;
        printf( "SCORE : " ) ;

    for ( int j = 0 ; j < 5 ; j++ ) {
        printf( "  %.0f" , STD[i].ScoreSub[j] ) ;
    }//end for แสดงคะแนน

    printf( "\nGrades :" ) ;
    for ( int j = 0 ; j < 5 ; j++ ) {
        if ( STD[i].ScoreSub[j] >= 80 ) {
            printf( "  A" )  ;
        } else if ( STD[i].ScoreSub[j] >= 75 && STD[i].ScoreSub[j] < 80 ) {
            printf( "  B+" ) ;
        } else if ( STD[i].ScoreSub[j] >= 70 && STD[i].ScoreSub[j] < 75 ) {
            printf( "  B" )  ;
        } else if ( STD[i].ScoreSub[j] >= 65 && STD[i].ScoreSub[j] < 70 ) {
            printf( "  C+" ) ;
        } else if ( STD[i].ScoreSub[j] >= 60 && STD[i].ScoreSub[j] < 65 ) {
            printf( "  C" )  ;
        } else if ( STD[i].ScoreSub[j] >= 55 && STD[i].ScoreSub[j] < 60 ) {
            printf( "  D+" ) ;
        } else if ( STD[i].ScoreSub[j] >= 50 && STD[i].ScoreSub[j] < 55 ) {
            printf( "  D+" ) ;
        } else {
            printf ( "  F" ) ;
        }//end if 
    }//end for ปริ้นเกรด

    float Average = 0 ;
    for ( int j = 0 ; j < 5 ; j++ ) {
        Average += STD[ i ].ScoreSub[ j ] ;
    }//end for หาค่าเฉลี่ย

    Average /= 5 ;
    printf( "\nAverage Scores: %.1f\n\n\n" , Average ) ;

    }//end funtion Grade
}
