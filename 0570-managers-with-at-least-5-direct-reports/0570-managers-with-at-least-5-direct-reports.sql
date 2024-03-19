# Write your MySQL query statement below
select E1.name as name from Employee E1, Employee E2
where E1.id = E2.managerId
group by E2.managerId
having count(E2.managerId)>=5