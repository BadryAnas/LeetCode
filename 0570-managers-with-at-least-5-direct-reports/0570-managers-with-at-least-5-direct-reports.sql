select mngr.name   
from employee emp , employee mngr
where mngr.id = emp.managerId
group by emp.managerId, mngr.name  
having count(emp.managerId) >= 5 

-----------------------------

