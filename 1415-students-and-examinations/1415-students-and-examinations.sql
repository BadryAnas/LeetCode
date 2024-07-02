/* Write your T-SQL query statement below */

SELECT TABLE1.* , ISNULL(TABLE2.attended_exams, 0) AS attended_exams 
FROM 

(select S.* , E.*
    from Students S , Subjects  E
) AS TABLE1
   
LEFT OUTER JOIN 

(   select S.student_id  , S.student_name , E.subject_name  ,COUNT(E.subject_name) AS attended_exams 
    from Students S, Examinations  E
    WHERE S.student_id  = E.student_id
    GROUP BY  S.student_id  , S.student_name , E.subject_name
) AS TABLE2

on TABLE1.student_id  = TABLE2.student_id  and TABLE1.subject_name  = TABLE2.subject_name 
ORDER BY student_id , subject_name
