# Write your MySQL query statement below
SELECT employee.name ,bonus.bonus from employee left join bonus on employee.empid=bonus.empid where bonus<1000 or bonus is null;