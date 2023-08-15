# Write your MySQL query statement below
select e.name as Employee
from employee e
join employee m
# ON e.id = m.managerId;
where m.id = e.managerId and e.salary > m.salary;




# select e.name as Employee
# from employee e
# join employee m
# where m.id=e.managerId and e.salary > m.salary;