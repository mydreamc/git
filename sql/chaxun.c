/*176--数据库--查询第二高的薪水*/
/* 该案例是选取了小于最大值的最大值*/
SELECT MAX(Salary)/*查那一列的最大值*/ AS SecondHighestSalary
FROM Employee/*表名*/
where salary/*列名*/ </*运算符*/ (SELECT MAX(Salary)
		FROM Employee)/*值*/

