int solution(int N){





    int  count = 0, i, j, temp, gapIndex = 0, gapCount = 0;

   int  binaryConvertArray[100], binaryGap[100];

   /*decimal to binary convert section*/

    while(N !=0 ){

        binaryConvertArray[count] = N % 2;

        N /=2;
        count++;


    }


    /* binary array reverse section*/

    j = count -1, i = 0;

    while(i < j){

        temp = binaryConvertArray[i];

        binaryConvertArray[i] = binaryConvertArray[j];
        binaryConvertArray[j] = temp;
        i++;
        j--;


    }




    /*searching gap indexr*/

    for(i = 1; i < count; i++){

        if(binaryConvertArray[i] == 0){

             gapCount++;


        }

        if(binaryConvertArray[i] == 1){

           // printf("gapcount =  %d \n", gapCount);

            binaryGap[gapIndex] = gapCount;
            gapCount = 0;
            gapIndex++;

        }

    }






    if(gapIndex > 1){


        if(binaryGap[0] > binaryGap[1]){

            return binaryGap[0];
        }

        else{

          return  binaryGap[1];
        }
    }

    else if(binaryGap[0] == 0){

        return 0;
    }

    else{

        return binaryGap[0];
    }




}