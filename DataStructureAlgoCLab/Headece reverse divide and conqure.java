package com.company;

public class Reverse {


    static void show(){


        display();
    }

     static void  display(){

        System.out.println(" this is show functio");

    }


  static   void  reverseArange(int A[], int start, int mid, int end){


        int n1 = mid -start+1;
        int n2 = end - mid;

      System.out.println(start + " "+mid +" "+end);

        int Larr[] = new int [n1];
        int Rarr[] = new int [n2+n1];

        int i,j;

        for(i=0; i<n1; i++){

            Larr[i] = A[i+start];

        }

        for(i=0; i<n2; i++){

            Rarr[i] = A[i+mid+1];
        }

        j=0;
        for(i=n2; i<n1+n2; i++){

            Rarr[i] = Larr[j];
            j++;

        }

        i=j=0;

        for (int k=start; k<=end; k++){

            A[k] = Rarr[i];
            i++;


        }






    }

  static   void reverse(int A[], int start, int end){

        int mid = (start + end) / 2;
        if(start < end){


            reverse(A, start , mid);
            reverse(A, mid+1, end);
            reverseArange(A, start, mid, end);

        }
    }


    public static void main(String[] args) {


        int A[] = {1,2,3,4,5};

        reverse(A, 0,4);

        for (int a:A) {
            System.out.print(a);
        }



    }
}