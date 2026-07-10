# Write your MySQL query statement below
select e.unique_id, et.name from Employees et
left join EmployeeUNI e on e.id = et.id;