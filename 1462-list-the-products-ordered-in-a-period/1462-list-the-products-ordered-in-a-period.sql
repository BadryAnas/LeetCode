/* Write your T-SQL query statement below */

select p.product_name , sum(unit) as unit
from orders o join products p 
on o.product_id = p.product_id
where o.order_date BETWEEN '2020-02-01' AND '2020-02-29'
group by p.product_name
having sum(unit) >= 100
              




