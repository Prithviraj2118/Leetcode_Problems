# Write your MySQL query statement below
select distinct A.email as Email from Person A, Person B
where A.id<>B.id AND A.email=B.email