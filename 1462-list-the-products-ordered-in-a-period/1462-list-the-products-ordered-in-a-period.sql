/* Write your T-SQL query statement below */
select product_name       , unit
from
(

    select newTable.product_id , sum(unit) as unit
    from
    (
        select *
        from orders
        where order_date >= '2020-02-01' and order_date <= '2020-02-29'
    ) as newTable 
    group by newTable.product_id
    having sum(unit) >= 100
) as t join products p 
on t.product_id = p.product_id

