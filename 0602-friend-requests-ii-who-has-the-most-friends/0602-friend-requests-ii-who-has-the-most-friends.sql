/* Write your T-SQL query statement below */
with newTable 
as
(
    select requester_id as id from RequestAccepted
    union all 
    select accepter_id as id from RequestAccepted
)
select top(1) id, count(id) as num
from newTable 
group by id
order by num desc