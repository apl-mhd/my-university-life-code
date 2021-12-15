<!DOCTYPE html>
<html>
<body>

<form action="upload.php" method="post" enctype="multipart/form-data">
    Select image to upload:
    <input type="file" name="file" >
   <button name="submit" type="submit">Upload</button>
</form>

</body>
</html>


/*file upload script php*/


<?php
if(isset($_POST["submit"])){
    $file = $_FILES["file"];
    print_r($file)."<br>";

    $fileName = $_FILES["file"]["name"];
    $tempeName = $_FILES["file"]["tmp_name"];
    $fileError = $_FILES["file"]["error"];
    $fileType = $_FILES["file"]["type"];

    $filExt = explode(".",$fileName);
    print_r($filExt);
    $fileActualExt = strtolower(end($filExt));

    $allowed =array('jpg','jpeg','png');

    if(in_array($fileActualExt,$allowed)){

        if($fileError == 0){

            $fileNameNew = uniqid('   ',true). ".".$fileActualExt;
            $fileDest = 'img/'.$fileNameNew;

            move_uploaded_file($tempeName, $fileDest);



        }
        else
            echo "error";


    }
    else
    {
        echo "you can't upload";
    }


}

?>