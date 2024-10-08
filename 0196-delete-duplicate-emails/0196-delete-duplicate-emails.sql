/* Write your T-SQL query statement below */
delete from Person
where Id not in 
(
    select min(Id) as min_id 
    from Person 
    group by Email
)
