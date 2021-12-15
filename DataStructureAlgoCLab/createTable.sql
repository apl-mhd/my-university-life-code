CREATE TABLE IF NOT EXISTS student(
    
    student_id INT NOT NULL UNIQUE,
    student_name  VARCHAR(30) NOT NULL,
    age INT NOT NULL
    
    );


update

UPDATE student SET student_id= 161042 ,student_name = "Ahsanullah", age =22 WHERE student_id = 11