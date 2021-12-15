SELECT * FROM
employees e1 
WHERE 3<=(

    SELECT COUNT(*)
    FROM employees e2
    WHERE e1.SALARY > e2.SALARY 

)