/* Write your T-SQL query statement below */
SELECT name 
from employee 
where id in (select managerid 
            from employee
            group by managerid
            having count(*) >= 5 )