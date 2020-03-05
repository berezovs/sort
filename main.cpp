#include <iostream>

void selectionSort(int *unsortedArray, int size){
	for(int i =0; i<size; i++){
		int smallest = i;
	
		for(int j = i; j<size; ++j){
			if(unsortedArray[j]<unsortedArray[smallest]){
				smallest = j;
		
	}
	}
		int temp = unsortedArray[i];
		unsortedArray[i] = unsortedArray[smallest];
		unsortedArray[smallest] = temp;
	}
	
	
	
}

void insertionSort(int *unsortedArray, int size){
	for(int i =0; i<size; i++){

	int a = i;
	while(unsortedArray[a]<unsortedArray[a-1]){
		int temp = unsortedArray[a];
		unsortedArray[a] = unsortedArray[a-1];
		unsortedArray[a-1] = temp;
		--a;
	}
	}
	
	
}

int main() {
	int *unsortedArray = new int[5];
	unsortedArray[0] = 2;
	unsortedArray[1] = 3;
	 unsortedArray[2] = 1;
	 unsortedArray[3] = 7;
	 unsortedArray[4] = 6;
	selectionSort(unsortedArray, 5);

	for (int i = 0; i < 5; i++){
		std::cout<<unsortedArray[i]<<std::endl;
	}
}