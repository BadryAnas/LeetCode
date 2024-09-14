DECLARE @total_users float;

SELECT @total_users = COUNT(*) 
FROM Users;

select r.contest_id , round(  ( count( r.contest_id)*1.0  / @total_users ) * 100  ,2)  as percentage
from Users u inner join Register r
on u.user_id  = r.user_id 
group by r.contest_id
order by percentage  desc , r.contest_id asc