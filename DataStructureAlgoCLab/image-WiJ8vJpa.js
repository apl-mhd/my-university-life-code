var imga = function() {
       var a;
       var x= document.getElementsByTagName("img");
        for(var i=0; i<x.length; i++){
           a +=x[i].src+ "\n";
        }

        document.write(a);
    };

   imga();