/* Write your T-SQL query statement below */
select customer_id  , count(customer_id ) as count_no_trans 
from Visits V FULL OUTER JOIN Transactions T
ON V.visit_id = T.visit_id
WHERE transaction_id IS NULL
group by customer_id 