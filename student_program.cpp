#include <stdio.h>
#include <stdlib.h>

void GetMatrix( int **value, int *row, int *col ) ;
void PrintMatrix( int *value, int row, int col ) ;

int main() {

    int *data, m = 3, n = 3 ;
    data = new int[ m * n ] ; //จัดสรรหน่วยความจำ
    
    GetMatrix( &data, &m, &n ) ; //รับค่าจากผู้ใช้
    PrintMatrix( data, m, n ) ; //แสดงผลเมทริกซ์

    delete[]data ; //ลบหน่วยความจำที่จัดสรรไว้หลังใช้งานเสร้จ
    return 0 ;

}//end function

void GetMatrix( int **value, int *row, int *col ) {
    printf( "Enter the nunber of rows and cols : " ) ;
    scanf( "%d %d", row, col ) ; //รับจำนวนแถวและคอลัมน์
    
    *value = new int[ *row * *col ] ;//จัดสรรหน่วยความจำใหม่ตามที่อิพุกเข้ามา
    if( *value == NULL ) { //ตรวจสอบว่าจัดสรรหน่วยความจำสำเร็จมั้ย
        printf( "Memory allocation failed!\n" ) ;
        exit(1) ;
    } //ออก

    for( int i = 0 ; i < *row ; i++ ) {
        for( int j = 0 ; j < *col ; j++ ) {
            scanf( "%d", &(*value)[ i * (*col) + j] ) ; //รับค่าที่ตำแหน่ง i,j
        }
    }
    
     
}//end void

void PrintMatrix( int *value, int row, int col ) { //รับค่าจากผู้ใช้
    printf( "Matrix (%dx%d) : \n", row, col ) ;
    for( int i = 0 ; i < row ; i++ ) { //พิมพ์เมทริกซ์ที่เก็บในหน่วยความจำ
        for( int j = 0 ; j < col ; j++ ) {
            printf( "%d ", value[i * col + j] ) ; //พิมพ์ค่าในตำแหน่ง i,j
        }
        printf( "\n" ) ;
    }//end for
}//end void
