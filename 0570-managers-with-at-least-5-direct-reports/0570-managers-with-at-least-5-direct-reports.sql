select mngr.name   
from employee emp , employee mngr
where mngr.id = emp.managerId
group by  mngr.name , mngr.id 
having count(emp.managerId) >= 5 
  
-----------------------------

     