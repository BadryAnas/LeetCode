/* Write your T-SQL query statement below */
select dname as Department  , ename as Employee  , salary
from 
(
    select d.name  as dname , e.name as ename , salary , dense_rank() over(partition by departmentId order by  salary desc ) as rn 
    from Employee e Join Department d
    on d.id = e.departmentId 
)as newTable
where RN between 1 and 3