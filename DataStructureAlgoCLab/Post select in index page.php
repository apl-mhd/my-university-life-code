        <div class="row"> <!--start row-->



            <?php

            $sql = "SELECT * FROM post";

            $result = $con->query($sql);




                while ($row = $result->fetch_assoc()){

                    $id = $row['postid'];

                    echo $id;
                    echo  '

                     <div class="col-md-6 lead"> 


                <div class="thumbnail">'

                  . '
                    <img class="" src="img/apex.jpg">

                    <div class="caption">'.'
                        <h3><del> '  . $row['discountrate']  . '% </del>'. ' Discount ' .'</h3>
                        <h3>'.'' . $row['expire'] . ' Days left' .'</h3> ';

                     echo  ' <button type="button" class="btn btn-success form-control">';
                      echo  '<a href="info.php?postid=' .$id .' ">'.'Clkkkkick</a> ';
echo '</button>  

                    </div>
                </div>
            </div>
                    
                    ';

                }

?>