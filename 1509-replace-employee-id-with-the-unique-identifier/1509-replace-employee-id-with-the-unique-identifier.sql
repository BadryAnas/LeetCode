/* Write your T-SQL query statement below */
select unique_id , name     
from Employees e left join EmployeeUNI  ee
on e.id = ee.id 