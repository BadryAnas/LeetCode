DECLARE @total_users float;

SELECT @total_users = COUNT(*) 
FROM Users;

select contest_id , round(  ( count( contest_id)*1.0  / @total_users ) * 100  ,2)  as percentage
from Register 
group by contest_id
order by percentage  desc , contest_id asc