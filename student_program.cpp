#include <stdio.h>

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
    printf( "Enter the nunber of rows: " ) ;
    scanf( "%d", row ) ; //รับจำนวนแถว
    

    printf( "Enter the number of cols: " ) ;
        scanf( "%d", col ) ; //รับจำนวนคอลลัมน์
       
    
    for( int i = 0 ; i < *row ; i++ ) { //รับค่าเมทริกซ์จากผู้ใช้
        for( int j = 0 ; j < *col ; j++ ) {
            printf( "Enter element at [%d][%d]: ", i + 1, j + 1 ) ;
            scanf( "%d", &(*value)[i * (*col) + j] ) ; //รับค่าที่ตำแหน่ง i,j
        }//end for 
    }//end for 
}//end void

void PrintMatrix( int *value, int row, int col ) {
    for( int i = 0 ; i < row ; i++ ) { //พิมพ์เมทริกซ์ที่เก็บในหน่วยความจำ
        for( int j = 0 ; j < col ; j++ ) {
            printf( "%d", value[i * col + j] ) ; //พิมพ์ค่าในตำแหน่ง i,j
        }
    }//end for
}//end void
