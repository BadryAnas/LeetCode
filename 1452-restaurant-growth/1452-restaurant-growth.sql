/* Write your T-SQL query statement below */
select *
from (

    select  visited_on ,
            sum(amount) over(ORDER BY visited_on asc ROWS BETWEEN 6 PRECEDING AND CURRENT ROW  ) as amount ,
            round(sum(amount) over(ORDER BY visited_on asc  ROWS BETWEEN 6 PRECEDING AND CURRENT ROW  ) *1.0 / 7, 2) as average_amount  
    from (
        select visited_on , sum(amount) as amount
        from Customer 
        group  by visited_on   
    ) AS T
) as t2
where visited_on not in (select top(6)visited_on from Customer  group by visited_on  ) 


