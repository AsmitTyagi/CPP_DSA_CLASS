// //arrays of array
// #include<iostream>
// #include<vector>
// using namespace std;
// int main(){
// //creating 2d array 
// //  int arr[3][4]= {1,2,3,4,5,6,7,8,9,10,11,12};
// int arr[3][4];


// for (int i =0; i<3; i++){
//     for (int j=0; j<4;j++){
//         cin>>arr[i][j];
//     }
// }
//  for (int i =0; i<3; i++){
//     for (int j=0; j<4;j++){
//         cout<<arr[i][j]<<" ";
//         cout<<endl;


//     }

// }

// }

#include<iostream>
using namespace std;
bool isKeyPresent( int arr[3][4], int target , int row , int col){
  for(int i=0; i<row ; i++){
    for (int    j=0; j< col ; j++){
        if (arr[i][j]==target )return true;


    }
}

}

int sum(int arr[][3], int row, int col ){
    int sum=0;
    for (int i =0; i<row; i++){
        for (int j=0; j<col; j++){
            sum+=arr[i][j];
            }
            }
            return sum;
            }



int maxSum(int arr[][3], int i, int j){
    int max=0;
    for(int i =0; i<3;i++){
        int temp=0;
        for(int j=0;j<3;j++){
            temp+=arr[i][j];
            if (temp>max){
                max=temp;
            }
        }
    }
    return max;
}

int maxsum2(int arr[3][3], int row , int col){
    int max=0;
    for(int i =0; i<3;i++){
        int temp=0;
        {
            for(int  j=0; j<3;j++){
                temp+=arr[i][j];
                if(temp>max){
                    max=temp;

                }
            }
        }
    }
return max;
}


int main(){
int arr[3][3]={1,2,3,4,5,6,7,8,9};
// int target=5;
cout<<maxsum2(arr,3,3);


}

