// memory allocation is cpp is done in two ways 
//static -> compile time 
//dynamic -> run time
 // int * arr=new int[n];     this is allocated memory with  dynamic array with use of pointer  for 1D array
 // int ** arr=new int*[n];    this is allocated memory with  dynamic array with use of pointere for 2D array
 #include<iostream>
 using namespace std;
 int main()
 {
    int n ;
     cin>>n;
     int **arr = new int*[n];
     for (int i =0; i<n;i++)
     {
        for(int j=0; j<n;j++){
            cin>>arr[i][j];

        }

     }
     //output
     for(int i=0; i<n;i++){
        for(int j=0; j<n;j++){
            cout<<arr[i][j]<<" ";
          

        }
         cout<<endl;
         
        }
//deallocate
for(int i=0;i<n;i++){
    delete[]arr[i];


}
delete []arr;

     }


