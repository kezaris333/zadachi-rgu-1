int main () {
    
    int arr [5] = {5, 4, 10, 4, 5};
    int i = 0;
    int j = 0;


    int q;
    
    for ( i = 0; i < 4; i++) {
        
        for ( j = 0; j < 4 - i; j++ ) { 
            
            //проверка больше ли арр (х) чем арр (х+1)
            if ( arr[j] > arr [j + 1] ) {
  
                //обмен местами если арр (х)> арр (х+1)
                q = arr[j];
                arr [j] = arr [j + 1];
                arr [j + 1] = q;
                
                }

            }
    
        }
    
    //вывод чисел массива после сортировки
        for (i = 0; i < 5; i++) {
            printf ( "%d\n", arr[i] );
    
    }


return 0;
}