/* Write your T-SQL query statement below */
declare @num int;
select top(1)  @num = salary  
from
(
    select top(2) salary
    from
    (
        select distinct salary from employee
    ) as t
    order by salary desc
) as newTable
order by salary asc

select case when count(distinct salary) = 1 then null else  @num end as SecondHighestSalary 
from employee