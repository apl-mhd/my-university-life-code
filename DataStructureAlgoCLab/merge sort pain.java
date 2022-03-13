package com.company;

public class Main {




    static void mergeSort(int A[], int start, int mid, int end){

        int n1 = mid+1- start;
        int n2 = end -mid;

        System.out.println(start+" "+mid+" "+end+" "+n1+" "+n2);

        int arr1[] = new int[n1+1];
        int arr2[] = new int[n2+1];
        int i,j;

        for( i =0; i<n1; i++){
            arr1[i] = A[i+start];

            //System.out.print(arr1[i]);
        }
        //System.out.println("arr2");

        for ( j =0; j<n2; j++){
           // System.out.print(j);
            arr2[j] = A[j+mid+1];

          //  System.out.print(arr2[j]);

        }

        arr1[n1]=99999;
        arr2[n2]=99999;

        i=j=0;


       for(int k=start; k<=end; k++){


            if( arr1[i] <= arr2[j]){

                A[k] = arr1[i];
                i++;
            }
            else{

                A[k] = arr2[j];
                j++;
            }

        }





    }

    static  void merge(int A[], int start, int end){


        int mid = (start +end )/2;
        if(start<end){

            merge(A, start, mid);
            merge(A, mid+1, end);

            mergeSort(A, start, mid, end);

        }


    }


    public static void main(String[] args) {
	// write your code here

        int A[] = {4,3,2,1};

        merge(A, 0,3);

        for (int a:A){

            System.out.print(a);
        }
    }
}