# Write your MySQL query statement below
# SELECT SALARY as SecondHighestSalary FROM EMPLOYEE ORDER BY SALARY DESC LIMIT 1 OFFSET 1

# select max(salary) as  SecondHighestSalary from employee where salary < (select max(salary) from employee)

SELECT(SELECT DISTINCT
    Salary 
FROM
    Employee
ORDER BY Salary DESC
LIMIT 1 OFFSET 1)AS SecondHighestSalary;