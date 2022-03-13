
    document.getElementById("id2").innerHTML = "ssss";

    var  a = {name: "apel",id:"011161036", dept:"CSE",


        nameid : function () {

        return this.name +" "+this.id;
        }

    };

    document.getElementById("id").innerHTML = a.nameid();