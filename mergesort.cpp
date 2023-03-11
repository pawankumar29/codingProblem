#include<bits/stdc++.h>
using namespace std;


void merge (int a[],int start,int end,int mid){

   int n1=mid-start+1;  // creating space according to the
   int n2=end-mid;

   int array1[n1]; // array on which we will apply the sorting
   int array2[n2];  // same as above


   int k=start; //we will sort the elements only according to the position of the existing array





   // insert the elements in new array from the original array

            int i,j;

            for(i=0;i<n1;i++){
               array1[i]=a[start+i];
            }


            for(j=0;j<n2;j++){
               array2[j]=a[mid+1+j];
            }





   // now appply merge logic
   i=j=0;

   while(i<n1&&j<n2){

       if(array1[i]<array2[j]){
          a[k++]=array1[i];
           i++;
       }
       else
       a[k++]=array2[j++];


   }


   while(i<n1){

       a[k++]=array1[i++];
   }


      while(j<n2){

       a[k++]=array2[j++];
   }











}

void mergesort(int a[],int start,int end){




       if(start<end){
         int mid=(start+end)/2;

         mergesort(a,start,mid);
         mergesort(a,mid+1,end);

         merge(a,start,end,mid);





       }





}


int main(){


    int a[]={5,9,8,4,1};

    mergesort(a,0,4);

    int i;

    for(i=0;i<5;i++){
      cout<<a[i]<<" ";
    }

  return 0;

}
