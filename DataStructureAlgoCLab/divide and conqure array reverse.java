package com.company;

public class Main {
//it's work only for array size 2^n


  static   void combine(int A[], int start, int end, int mid){

        //<<start<<" sdsss "<< mid<<end<<endl;

      System.out.println(start+" "+end + " "+mid);


        int n1 = mid+1- start;
        int n2 = end - mid;

        int arr1[] = new int[n1];
        int arr2[] = new int[n2];

        for(int i=0; i<n1; i++){

            arr1[i] = A[start+i];

        }


        for(int i=0; i<n2; i++){

            arr2[i] = A[mid+1+i];

        }

        for(int i=0; i<n2; i++){

            A[i+start] = arr2[i];

        }

        for(int i=0; i<n1; i++){

            A[i+mid+1] = arr1[i];

        }




    }


   static void revers(int A[], int start, int end){

       int mid = (start +end)/2;
        if(start < end) {

            revers(A, start, mid);
            revers(A, mid + 1, end);

            combine(A, start, end, mid);


        }

    }




    public static void main(String[] args) {
	// write your code here

        int a[] = {1,2,3,4};

        revers(a, 0, 3);

        System.out.println(a[0]+" "+a[1]+" "+a[2]+" "+a[3]);


    }
}