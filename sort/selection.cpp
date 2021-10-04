#include <iostream>

int main(void){
	int min, index, temp;
	int array[10] = {1,10,5,8,7,6,4,3,2,9};

    int a = 2;
    switch(a){
    case 1 :
    
        for(int i=0; i<10; i++){
            min=999;
            for(int j=i; j<10; j++){
                if( min > array[j]){
                    min = array[j];
                    index = j;
                }
            }
            temp = array[i];
            array[i] = array[index];
            array[index] = temp;
        }
        break;
    case 2:

        for(int i =0;i<10;i++){
            min = array[i];
            index = i;
            for(int j=i+1; j<10 ; j++){
                if(min>array[j]){
                    min = array[j];
                    index = j;
                }
            }
            temp = array[i];
            array[i] = array[index];
            array[index] = temp;
        }
        break;
    default:
        std::cout << "wrong number" << std::endl; 
        
    }
	

    for(int i=0;i<10;i++){
        std::cout << array[i] << std::endl; 
    }
}
