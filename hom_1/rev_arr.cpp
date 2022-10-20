#include <iostream>
using namespace std;
 
int main (){ 
    int arr[50], arr2[50];  
    int *ptr, i, num;  
    cout <<"Enter the number of element array: "<< endl;  
    cin >> num;     
      
    cout <<"Enter numbers with one space: ";  
		for (i = 0; i < num; i++){  
        cin >> arr[i];  
    	}  
    ptr = &arr[0];  
    cout <<" Entered element of the array are: " <<endl;  
		for (i = 0; i < num; i++){  
        	cout << "\t" << *ptr;  
        	ptr++;  
		}	  
    ptr--; 
			for ( i = 0; i < num; i++){  
				arr2[i] = *ptr;  
				ptr--;  
    		}  
    ptr = &arr2[0];  
    		for ( i = 0; i < num; i++){  
        		arr[i] = *ptr;  
        		ptr++;
    		}  
    ptr = &arr[0];
    cout <<" \n The reversed array elements are: " << endl;  
    		for ( i = 0; i < num; i++){  
        		cout <<" \t " << *ptr;  
        		ptr++;  
   			 }		  
    return 0;  
}  
